
class Queue{
    constructor(data){
        this.data=data;
        this.next=null;
    }
}
class QueueDS{
    constructor(){
        this.front=null
        this.rear=null;
    }
    enqueue(data){
        const newData=new Queue(data);
        if(this.front==null){
            this.front=newData;
            this.rear=newData;
        }else{
            this.rear.next=newData;
            this.rear=newData;
        }
        this.rear.next=null;
        console.log("New Data Added");
    }
    dequeue(){
        if(this.front==null){
            console.log("Queue is empty!!");
        }else{
            this.front=this.front.next;
            console.log("Deleted!");
        }
    }
    traverse(){
        if(this.front==null){
            console.log("Queue is empty!!");
        }else{
            let current=this.front;
            while(current!=null){
                console.log("Data is "+current.data);
                console.log("----------------------------");
                current=current.next;
            }
        }
    }
    is_empty(){
        if(this.front==null){
            console.log("Queue is empty!!");
        }else{
            console.log("Queue is not empty!!");
        }
    }
}

// Let's Start here
const queue=new QueueDS();
queue.is_empty();
queue.enqueue(10);
queue.enqueue(20);
queue.enqueue(30);
queue.enqueue(40);
queue.traverse();
queue.dequeue();
queue.traverse();
queue.is_empty()