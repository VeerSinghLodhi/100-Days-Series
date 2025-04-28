import java.util.Scanner;

class DoublyLL {
    int data;
    DoublyLL prev, next;
}
public class DoublyLinkedList {
    private static DoublyLL start = null, end = null;
    private static final Scanner scanner = new Scanner(System.in);
    // Function for add new nodes
    public static void addNode() {
        DoublyLL ptr = new DoublyLL();
        System.out.print("\nEnter data: ");
        ptr.data = scanner.nextInt();

        if (start == null) {
            start = end = ptr;
            start.prev = ptr;
            end.next = ptr;
        } else {
            ptr.prev = end;
            ptr.next = start;
            end.next = ptr;
            end = ptr;
            start.prev = end;
        }
        System.out.println("\nNew Node Added");
    }
    // Function for traverse or display from start to end nodes
    public static void traverseHeadToEnd() {
        if (start == null) {
            System.out.println("\nDoubly Linked List is empty!");
        } else {
            DoublyLL temp = start;
            do {
                System.out.println("\nData is " + temp.data);
                System.out.println("-----------------------");
                temp = temp.next;
            } while (temp != start);
        }
    }
    // Function for traverse or display from end ot start nodes
    public static void traverseEndToHead() {
        if (start == null) {
            System.out.println("\nDoubly Linked List is empty!");
        } else {
            DoublyLL temp = end;
            do {
                System.out.println("\nData is " + temp.data);
                System.out.println("----------------------");
                temp = temp.prev;
            } while (temp != end);
        }
    }

    // Main Method
    public static void main(String[] args) {
        // Let's Start Here
        int ch;
        do {
            System.out.println("\n1. Add New Node");
            System.out.println("2. Traverse (Head to End)");
            System.out.println("3. Traverse (End to Head)");
            System.out.println("4. Exit");
            System.out.print("Select a choice: ");
            ch = scanner.nextInt();

            switch (ch) {
                case 1:
                    addNode();
                    break;
                case 2:
                    traverseHeadToEnd();
                    break;
                case 3:
                    traverseEndToHead();
                    break;
                case 4:
                    System.out.println("\nExited");
                    break;
                default:
                    System.out.println("\nInvalid choice");
            }
        } while (ch != 4);
    }
}
