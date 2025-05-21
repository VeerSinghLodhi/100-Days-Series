class LinkedList:
    def __init__(self,data):
        self.data=data
        self.next=None

class RemoveDuplicatesfromSortedList:
    def __init__(self):
        self.head=None

    # Method for add new Node
    def add_node(self):
        data=int(input('Enter data '))
        newNode=LinkedList(data)
        if self.head==None:
            self.head=newNode
        else:
            current,last = self.head,self.head
            while current!=None:
                last=current
                current=current.next
            last.next=newNode
    # Method for traverse
    def traverse(self):
        if self.head==None:
            print('Linked List is empty')
        else:
            current=self.head
            while current!=None:
                print('Data is ',current.data)
                print('-----------------------')
                current=current.next
    # Method to remove Duplicates Node
    def get_remove_duplicates(self):
        if self.head==None:
            print('Linked list is empty')
        else:
            current=self.head
            while current.next!=None:
                if current.data==current.next.data:
                    current.next=current.next.next
                else:
                    current=current.next

# Let's Start Here
list=RemoveDuplicatesfromSortedList()
while(True):
    print('1. Add New Node')
    print('2. Traverse')
    print('3. Remove Duplicate')
    print('4. Exit')
    ch=int(input('Select a choice : '))
    if ch==1:
        list.add_node()
    elif ch==2:
        list.traverse()
    elif ch==3:
        list.get_remove_duplicates()
    elif ch==4:
        print('Exiting...')
        break
    else:
        print('Invalid choice')