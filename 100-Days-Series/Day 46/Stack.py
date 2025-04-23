class StackNode:
    def __init__(self,data):
        self.data=data
        self.next=None
    
class Stack:
    def __init__(self):
        self.top=None


    def push(self,data):
        newNode=StackNode(data)
        newNode.next=self.top
        self.top=newNode
        print('New Data Added')

    def pop(self):
        if not self.top:
            print('Stack is empty!')
        else:
            print('Popped element is ',self.top.data)
            self.top=self.top.next
    
    def peek(self):
        if not self.top:
            print('Stack is empty!')
        else:
            print('Top element is ',self.top.data)

    def traverse(self):
        if not self.top:
            print('Stack is empty!')
        else:
            current=self.top
            while current:
                print('Data is : ',current.data)
                current=current.next

    def is_empty(self):
        if not self.top:
            print('Stack is empty')
        else:
            print('Stack is not empty')

stack=Stack()
stack.push(10)
stack.push(20)
stack.push(30)
stack.push(40)
stack.traverse()
stack.peek()
stack.pop()
stack.traverse()
stack.is_empty()