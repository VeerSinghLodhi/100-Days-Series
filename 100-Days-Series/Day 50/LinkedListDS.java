class LinkedList {
    int data;
    LinkedList next;

    // Constructor to initialize a new node
    public LinkedList(int data) {
        this.data = data;
        this.next = null;
    }
}

public class LinkedListDS {
    private static LinkedList head = null;
    public static java.util.Scanner scanner = new java.util.Scanner(System.in);

    // Method to create a new node
    public static LinkedList createNode() {
        System.out.print("Enter data : ");
        int data = scanner.nextInt();
        LinkedList newData = new LinkedList(data);
        return newData;
    }

    // Method to add a node at the beginning of the linked list
    public static void addAtBegin() {
        LinkedList newNode = createNode();
        newNode.next = head;
        head = newNode;
        System.out.println("New Node Added");
    }

    // Method to add a node in the middle of the linked list
    public static void addAtMiddle() {
        LinkedList newNode = createNode();
        int no;
        boolean res = false;
        System.out.print("Enter data after which you want to insert the new node : ");
        no = scanner.nextInt();
        LinkedList temp;
        for (temp = head; temp != null; temp = temp.next) {
            if (temp.data == no) {
                newNode.next = temp.next;
                temp.next = newNode;
                System.out.println("New Node Added");
                res = true;
                break;
            }
        }
        if (!res) {
            System.out.println("Data is not found!!");
        }
    }

    // Method to add a node at the end of the linked list
    public static void addAtEnd() {
        LinkedList newNode = createNode();
        if (head == null) {
            head = newNode;
            newNode.next = null;
        } else {
            LinkedList temp, last = head;
            for (temp = head; temp != null; temp = temp.next) {
                last = temp;
            }
            last.next = newNode;
            newNode.next = null;
        }
        System.out.println("New Node Added");
    }

    // Method to traverse and display the linked list
    public static void traverse() {
        if (head == null) {
            System.out.println("Linked List is empty!");
        } else {
            LinkedList temp;
            for (temp = head; temp != null; temp = temp.next) {
                System.out.println("Data is " + temp.data);
                System.out.println("---------------------------------");
            }
        }
    }

    // Main method 
    public static void main(String[] args) {
        // Let's Start here
        int ch;
        do {
            System.out.println("1. Add at the Beginning");
            System.out.println("2. Add at the Middle");
            System.out.println("3. Add at the End");
            System.out.println("4. Traverse");
            System.out.println("5. Exit");
            System.out.print("Select a choice : ");
            ch = scanner.nextInt();
            if (ch == 1) {
                addAtBegin();
            } else if (ch == 2) {
                addAtMiddle();
            } else if (ch == 3) {
                addAtEnd();
            } else if (ch == 4) {
                traverse();
            } else if (ch == 5) {
                System.out.println("Exited");
            } else {
                System.err.println("Invalid choice");
            }
        } while (ch != 5);
    }
}
