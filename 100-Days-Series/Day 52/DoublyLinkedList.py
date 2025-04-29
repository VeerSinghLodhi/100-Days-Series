class DoublyLL:
    def __init__(self, data):
        self.data = data
        self.prev = None
        self.next = None

class DoublyLinkedList:
    def __init__(self):
        self.start = None
        self.end = None

    # Function to add new nodes
    def add_node(self, data):
        new_node = DoublyLL(data)

        if self.start is None:
            self.start = self.end = new_node
            self.start.prev = new_node
            self.end.next = new_node
        else:
            new_node.prev = self.end
            new_node.next = self.start
            self.end.next = new_node
            self.end = new_node
            self.start.prev = self.end

        print("New Node Added")

    # Function to traverse or display from start to end nodes
    def traverse_head_to_end(self):
        if self.start is None:
            print("Doubly Linked List is empty!")
        else:
            temp = self.start
            while True:
                print(f"Data is {temp.data}")
                print("-----------------------")
                temp = temp.next
                if temp == self.start:
                    break

    # Function to traverse or display from end to start nodes
    def traverse_end_to_head(self):
        if self.start is None:
            print("Doubly Linked List is empty!")
        else:
            temp = self.end
            while True:
                print(f"Data is {temp.data}")
                print("----------------------")
                temp = temp.prev
                if temp == self.end:
                    break

    # Function to delete a node
    def del_node(self, data):
        if self.start is None:
            print("Doubly Linked List is empty!")
            return

        temp = self.start
        found = False

        while True:
            if temp.data == data:
                found = True
                if temp == self.start and temp == self.end:
                    # Only one node in the list
                    self.start = self.end = None
                elif temp == self.start:
                    self.start = self.start.next
                    self.start.prev = self.end
                    self.end.next = self.start
                elif temp == self.end:
                    self.end = self.end.prev
                    self.end.next = self.start
                    self.start.prev = self.end
                else:
                    temp.prev.next = temp.next
                    temp.next.prev = temp.prev

                print(f"Node with data {data} deleted.")
                break

            temp = temp.next
            if temp == self.start:
                break

        if not found:
            print(f"Node with data {data} not found!")

# Main Execution
dll = DoublyLinkedList()

while True:
    print("\n1. Add New Node")
    print("2. Traverse (Head to End)")
    print("3. Traverse (End to Head)")
    print("4. Delete Node")
    print("5. Exit")
    choice = int(input("Select a choice: "))

    if choice == 1:
        data = int(input("Enter data: "))
        dll.add_node(data)
    elif choice == 2:
        dll.traverse_head_to_end()
    elif choice == 3:
        dll.traverse_end_to_head()
    elif choice == 4:
        data = int(input("Enter data to delete: "))
        dll.del_node(data)
    elif choice == 5:
        print("Exited")
        break
    else:
        print("Invalid choice")
