class LinkedList:
    def __init__(self,data):
      self.data=data
      self.next=None

class LinkedListDS:
    def __init__(self):
      self.head=None

    def addNode(self,data):
        newNode=LinkedList(data)
        if self.head==None:
           self.head=newNode
           newNode.next=None
        else:
            temp=self.head
            last=self.head
            while temp!=None:
              last=temp
              temp=temp.next
            last.next=newNode
            newNode.next=None
        print('New Node Added')
    
    def traverse(self):
        if  self.head==None:
          print('Linked list is empty')
        else:
           temp=self.head
           while temp!=None:
              print('Data is ',temp.data)
              print('---------------------')
              temp=temp.next

# Let's Start here
ll=LinkedListDS()
ll.addNode(10)
ll.addNode(20)
ll.addNode(30)
ll.addNode(40)
ll.addNode(50)
ll.traverse()
    