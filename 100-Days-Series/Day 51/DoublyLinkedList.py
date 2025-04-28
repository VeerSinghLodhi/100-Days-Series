class DoublyLL:
    def __init__(self, data):
        self.data = data
        self.prev = None
        self.next = None

class DoublyLinkedList:
    def __init__(self):
        self.start = None
        self.end = None

    # Function for add new nodes.
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

    # Function for traverse or display from start to end nodes.
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

   # Function for traverse or display from end to start nodes.
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

# Main Execution
dll = DoublyLinkedList()

while True:
    print("\n1. Add New Node")
    print("2. Traverse (Head to End)")
    print("3. Traverse (End to Head)")
    print("4. Exit")
    choice = int(input("Select a choice: "))

    if choice == 1:
        data = int(input("Enter data: "))
        dll.add_node(data)
    elif choice == 2:
        dll.traverse_head_to_end()
    elif choice == 3:
        dll.traverse_end_to_head()
    elif choice == 4:
        print("Exited")
        break
    else:
        print("Invalid choice")
