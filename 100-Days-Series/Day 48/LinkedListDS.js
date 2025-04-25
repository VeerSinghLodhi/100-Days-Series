
class LinkedList{
    constructor(data){
        this.data=data;
        this.next=null;
    }
}

class LinkedListDS{
    constructor(){
        this.head=null;
    }
    addNode(data){
        const  newNode=new LinkedList(data);
        if(this.head==null){
            this.head=newNode;
            newNode.next=null;
        }else{
            let last;
            for(let temp=this.head;temp!=null;temp=temp.next){
                last=temp;
            }
            last.next=newNode;
            newNode.next=null;
        }
        console.log("New Node Added");
    }
    traverse(){
        if(this.head==null){
            console.log("Linked List is empty");
        }else{
            for(let temp=this.head;temp!=null;temp=temp.next){
                console.log("Data is "+temp.data);
                console.log("------------------------------");
            }
        }
    }
}

// Let's Start here
ll=new LinkedListDS();
ll.addNode(10);
ll.addNode(20);
ll.addNode(30);
ll.addNode(40);
ll.addNode(50);
ll.traverse();
