class DoublyLL:
    def __init__(self, data):
        self.data = data
        self.prev = None
        self.next = None

class DoublyLinkedList:
    def __init__(self):
        self.start = None
        self.end = None

    # Function to add a node to the list
    def add_node(self):
        value = int(input("\nEnter Data: "))
        new_node = DoublyLL(value)

        if self.start is None:
            # First node in the list
            self.start = self.end = new_node
            self.start.next = self.start.prev = self.start
        else:
            print("\nWhere do you want to insert the new node?")
            print("1. At the Beginning")
            print("2. In the Middle")
            print("3. At the End")
            choice = int(input("Select a choice: "))

            if choice == 1:
                # Insert at the beginning
                new_node.next = self.start
                new_node.prev = self.end
                self.start.prev = new_node
                self.end.next = new_node
                self.start = new_node
            elif choice == 2:
                # Insert in the middle
                after_data = int(input("\nEnter data after which you want to insert the new record: "))
                temp = self.start
                found = False

                while True:
                    if temp.data == after_data:
                        new_node.next = temp.next
                        new_node.prev = temp
                        temp.next.prev = new_node
                        temp.next = new_node
                        found = True
                        break
                    temp = temp.next
                    if temp == self.start:
                        break

                if not found:
                    print(f"\nData {after_data} not found. Node not added.")
                    return
            elif choice == 3:
                # Insert at the end
                new_node.prev = self.end
                new_node.next = self.start
                self.end.next = new_node
                self.start.prev = new_node
                self.end = new_node
            else:
                print("\nInvalid choice. Node not added.")
                return
        print("\nNew Node Added Successfully.")

    # Function to traverse the list from head to end
    def traverse_head_to_end(self):
        if self.start is None:
            print("\nLinked List is empty.")
            return

        temp = self.start
        print("\nTraversing from Head to End:")
        while True:
            print(f"Data: {temp.data}")
            temp = temp.next
            if temp == self.start:
                break

    # Function to traverse the list from end to head
    def traverse_end_to_head(self):
        if self.start is None:
            print("\nLinked List is empty.")
            return

        temp = self.end
        print("\nTraversing from End to Head:")
        while True:
            print(f"Data: {temp.data}")
            temp = temp.prev
            if temp == self.end:
                break

# Main function
if __name__ == "__main__":
    dll = DoublyLinkedList()

    while True:
        print("\n\nMenu:")
        print("1. Add New Data")
        print("2. Traverse (Head to End)")
        print("3. Traverse (End to Head)")
        print("4. Exit")
        choice = int(input("Select a choice: "))

        if choice == 1:
            dll.add_node()
        elif choice == 2:
            dll.traverse_head_to_end()
        elif choice == 3:
            dll.traverse_end_to_head()
        elif choice == 4:
            print("\nExiting...")
            break
        else:
            print("\nInvalid choice. Try again.")
