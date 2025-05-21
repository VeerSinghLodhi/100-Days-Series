class LinkedList{
    int data;
    LinkedList next;
    public LinkedList(int data) {
        this.data=data;
        this.next=null;
    }
}
public class RemoveDuplicatesfromSortedList {
    private static LinkedList head=null;// Head of the Linked List
    public static java.util.Scanner sc=new java.util.Scanner(System.in);
    // Method to add New Node 
    public static void addNode(){
        System.out.print("Enter Data : ");
        int data=sc.nextInt();
        LinkedList newNode=new LinkedList(data);
        if(head==null){
            head=newNode;
        }else{
            LinkedList temp,last=head;
            for(temp=head;temp!=null;temp=temp.next){
                last=temp;
            }
            last.next=newNode;
        }
    }
    // Method for traverse
    public static void traverse(){
        if(head==null){
            System.out.println("Linked List is Empty");
        }else{
            LinkedList temp;
            for(temp=head;temp!=null;temp=temp.next){
                System.out.println("Data is "+temp.data);
                System.out.println("------------------------------");
            }
        }
    }
    // Method to remove Duplicates
    public static void getRemoveDuplicates(){
        if(head==null){
            System.out.println("Linked List is Empty");
        }else{
            LinkedList current=head;
            while(current.next!=null){
                if(current.data==current.next.data){
                    current.next=current.next.next;
                }else{
                    current=current.next;
                }
            }
        }
    }
    // Main Method 
    public static void main(String [] args){
        // Let's Start Here
        int ch;
        do { 
            System.out.println("1. Add New Node");
            System.out.println("2. Traverse");
            System.out.println("3. Remove Duplicates");
            System.out.println("4. Exit");
            System.out.print("Select a choice : ");
            ch=sc.nextInt();
            if(ch==1){
                addNode();
            }else if(ch==2){
                traverse();
            }else if(ch==3){
                getRemoveDuplicates();
            }else if(ch==4){
                System.out.println("Exiting...");
            }else{
                System.out.println("Invalid choice");
            }
        } while (ch!=4);
    }
}
