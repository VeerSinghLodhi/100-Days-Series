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
    
    def del_node(self,data):
        if  self.head==None:
          print('Linked list is empty')
        else:
          temp=self.head
          res=False
          prev=self.head
          while temp!=None:
            if temp.data==data:
                if temp==self.head:
                   self.head=self.head.next
                elif temp.next==None:
                   prev.next=None
                else:
                   prev.next=temp.next
                print("Data Deleted")
                res=True
            prev=temp
            temp=temp.next
        if res==False:
           print("Data is not found")
        
# Let's Start here
ll=LinkedListDS()
ll.addNode(10)
ll.addNode(20)
ll.addNode(30)
ll.addNode(40)
ll.addNode(50)
ll.traverse()
print("After Deleting..")
ll.del_node(10)
ll.del_node(30)
ll.del_node(50)
ll.traverse()
    