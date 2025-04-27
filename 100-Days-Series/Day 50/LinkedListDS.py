class LinkedList:
    def __init__(self, data):
        self.data = data  # Data contained in the node
        self.next = None  # Pointer to the next node

class LinkedListDS:
    def __init__(self):
        self.head = None  # Head pointer to the start of the linked list

    # Add a new node at the beginning of the linked list
    def add_at_begin(self, data):
        newNode = LinkedList(data)
        newNode.next = self.head  # New node points to the current head
        self.head = newNode  # Update head to the new node
        print('New Node Added')

    # Add a new node in the middle of the linked list after a specific node
    def add_at_middle(self, afternode, data):
        newNode = LinkedList(data)
        temp = self.head
        res = 0  # Flag to track if the afternode is found
        while temp is not None:
            if temp.data == afternode:
                newNode.next = temp.next  # New node points to the next of the current node
                temp.next = newNode  # Current node points to the new node
                print('New Node Added')
                res = 1
                break
            temp = temp.next
        if res == 0:
            print('Data is not found')

    # Add a new node at the end of the linked list
    def add_at_end(self, data):
        newNode = LinkedList(data)
        if self.head is None:
            self.head = newNode  # Set the new node as head if the list is empty
            self.head.next = None
        else:
            temp = self.head
            last = self.head
            while temp is not None:
                last = temp  # Iterate to the last node
                temp = temp.next
            last.next = newNode  # Last node points to the new node
            newNode.next = None
        print('New Node Added')

    # Traverse and display the data of each node in the linked list
    def traverse(self):
        if self.head is None:
            print('Linked list is empty')
        else:
            temp = self.head
            while temp is not None:
                print('Data is', temp.data)
                print('---------------------')
                temp = temp.next


# Example usage
ll = LinkedListDS()
ll.add_at_end(10)
ll.add_at_end(20)
ll.add_at_end(30)
print('Initial List:')
ll.traverse()

print('After adding at the beginning:')
ll.add_at_begin(40)
ll.traverse()

print('After adding in the middle:')
ll.add_at_middle(20, 50)
ll.traverse()
