class Queue{
    int data;
    Queue next;
    Queue(int data){
        this.data=data;
        this.next=null;
    }
}
public class QueueDS {
    private static Queue front=null,rear=null;
    public static java.util.Scanner scanner=new java.util.Scanner(System.in);
    public static void enqueue(){
        System.out.print("Enter Data : ");
        int data=scanner.nextInt();
        Queue newData=new Queue(data);
        if(front==null){
            front=rear=newData;
        }else{
            rear.next=newData;
            rear=newData;
        }
        rear.next=null;
        System.out.println("New Dada Added");
    }
    public static void dequeue(){
        if(front==null){
            System.out.println("Queue is Empty!");
        }else{
            front=front.next;
            System.out.println("Deleted");
        }
    }
    public static void traverse(){
        if(front==null){
            System.out.println("Queue is Empty!");
        }else{
            Queue temp=front;
            while(temp!=null){
                System.out.println("Data is "+temp.data);
                System.out.println("---------------------------------");
                temp=temp.next;
            }
        }
    }
    public static void isEmpty(){
        if(front==null){
            System.out.println("Queue is Empty!");
        }else{
            System.out.println("Queue is not Empty!");
        }
    }
    // Main Method
    public static void main(String [] args){
        // Let's Start here
        int ch;
        do { 
            System.out.println("----Queue Operations");
            System.out.println("1. Enqueue");
            System.out.println("2. Dequeue");
            System.out.println("3. Traverse");
            System.out.println("4. IsEmpty");
            System.out.println("5. Exit");
            System.out.print("Select a choice : ");
            ch=scanner.nextInt();
            if(ch==1){
                enqueue();
            }else if(ch==2){
                dequeue();
            }else if(ch==3){
                traverse();
            }else if(ch==4){
                isEmpty();
            }else if(ch==5){
                System.out.println("Exited");
            }else{
                System.out.println("Invalid choice");
            }
        } while (ch!=5);
    }
}
