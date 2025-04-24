
class Queue:
    def __init__(self,data):
        self.data=data
        self.next=None

class QueueDS:
    def __init__(self):
        self.front=None
        self.rear=None
    
    def enqueue(seft,data):
        newData=Queue(data)
        if seft.front==None:
            seft.front=newData
            seft.rear=newData
        else:
            seft.rear.next=newData
            seft.rear=newData
        seft.rear.next=None
        print('New Data Added')
    
    def deququ(self):
        if self.front==None:
            print('Queue is empty!')
        else:
            self.front=self.front.next
            print('Deleted!')
        
    def traverse(self):
        if self.front==None:
            print('Queue is empty!')
        else:
            current=self.front
            while current!=None:
                print('Data is ',current.data)
                print('---------------------')
                current=current.next

    def is_empty(self):
        if self.front==None:
            print('Queue is empty!')
        else:
            print('Queue is not empty!')

# Let's Start here
queue=QueueDS()
queue.is_empty()
queue.enqueue(10)
queue.enqueue(20)
queue.enqueue(30)
queue.enqueue(40)
queue.traverse()
queue.is_empty()
queue.deququ()
queue.traverse()
queue.is_empty()