

class LinkedList{
    int data;
    LinkedList next;
    public LinkedList(int data) {
        this.data=data;
        this.next=null;
    }
    
}
public class LinkedListDS {
    private static  LinkedList head=null;
    public static java.util.Scanner scanner=new java.util.Scanner(System.in);
    public static void addNode(){
        System.out.print("Enter data : ");
        int data=scanner.nextInt();
        LinkedList newNode=new LinkedList(data);
        if(head==null){
            head=newNode;
            newNode.next=null;
        }else{
            LinkedList p,last=head;
            for(p=head;p!=null;p=p.next){
                last=p;
            }
            last.next=newNode;
            newNode.next=null;
        }
        System.out.println("New Node Added");
    }
    public static void traverse(){
        if(head==null){
            System.out.println("Linked List is empty!");
        }else{
            LinkedList temp;
            for(temp=head;temp!=null;temp=temp.next){
                System.out.println("Data is "+temp.data);
                System.out.println("---------------------------------");
            }
        }
    }
    public static void delNode(){
        if(head==null){
            System.out.println("Linked List is empty!!");
        }
        else{
            int no;
            boolean res=false;
            System.out.print("\nEnter data to delete : ");
            no=scanner.nextInt();
            LinkedList temp,prev=head;
            for(temp=head;temp!=null;temp=temp.next){
                if(temp.data==no){
                    if(temp==head){
                        head=head.next;
                    }else if(temp.next==null){
                        prev.next=null;
                    }else{
                        prev.next=temp.next;
                    }
                    System.out.println("Data Deleted");
                    res=true;
                    break;
                }
                prev=temp;
            }
            if(!res){
                System.out.println("Data is not found");
            }
        }
    }
    // Main Method
    public static void main(String [] args){
        // Let's Start here
        int ch;
        do{
            System.out.println("1. Add New Node");
            System.out.println("2. Traverse");
            System.out.println("3. Delete");
            System.out.println("4. Exit");
            System.out.print("Select a choice : ");
            ch=scanner.nextInt();
            if(ch==1){
                addNode();
            }else if(ch==2){
                traverse();
            }else if(ch==3){
                delNode();
            }else if(ch==4){
                System.out.println("Exited");   
            }else{
                System.err.println("Invalid choice");
            }

        }while(ch!=4);
    }

}
