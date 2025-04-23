class StackNode{
    constructor(data){
        this.data=data;
        this.next=null;
    }
}
class Stack{
    constructor(){
        this.top=null;
    }
    push(data){
        const   newNode=new StackNode(data);
        newNode.next=this.top;
        this.top=newNode;
        console.log("New Data Added");
    }
    pop(){
        if(this.top==null){
            console.log("Stack is empty!");
        }else{
            console.log("Popped element is : "+this.top.data);
            this.top=this.top.next;
        }
    }
    peek(){
        if(this.top==null){
            console.log("Stack is empty!");
        }else{
            console.log("Top element is : "+this.top.data);
        }
    }
    traverse(){
        if(this.top==null){
            console.log("Stack is empty!");
        }else{
            let current=this.top;
            while(current!=null){
                console.log("Data is : "+current.data);
                console.log("--------------------------");
                current=current.next;
            }
        }
    }
    isEmpty() {
        console.log(this.top ? "Stack is not Empty" : "Stack is Empty");
    }
}
// Let's Start here
const stack =new Stack();
stack.push(10);
stack.push(20);
stack.push(30);
stack.push(40);
stack.traverse();
stack.peek();
stack.pop();
stack.traverse();
stack.isEmpty();