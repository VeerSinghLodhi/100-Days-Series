import java.util.Scanner;
class DoublyLL {
    int data;
    DoublyLL prev, next;
}
public class DoublyLinkedList {
    private static DoublyLL start = null, end = null;
    private static final Scanner scanner = new Scanner(System.in);
    
    // Function to add new nodes
    public static void addNode() {
        DoublyLL ptr = new DoublyLL();
        System.out.print("\nEnter data: ");
        ptr.data = scanner.nextInt();
        if (start == null) {
            start = end = ptr;
            start.prev = end;
            end.next = start;
        } else {
            ptr.prev = end;
            ptr.next = start;
            end.next = ptr;
            start.prev = ptr;
            end = ptr;
        }
        System.out.println("\nNew Node Added");
    }

    // Function to traverse or display from start to end nodes
    public static void traverseHeadToEnd() {
        if (start == null) {
            System.out.println("\nDoubly Linked List is empty!");
        } else {
            DoublyLL temp = start;
            do {
                System.out.println("\nData: " + temp.data);
                System.out.println("-----------------------");
                temp = temp.next;
            } while (temp != start);
        }
    }

    // Function to traverse or display from end to start nodes
    public static void traverseEndToHead() {
        if (start == null) {
            System.out.println("\nDoubly Linked List is empty!");
        } else {
            DoublyLL temp = end;
            do {
                System.out.println("\nData: " + temp.data);
                System.out.println("----------------------");
                temp = temp.prev;
            } while (temp != end);
        }
    }

    // Function to delete a node
    public static void delNode() {
        if (start == null) {
            System.out.println("\nDoubly Linked List is empty!");
        } else {
            System.out.print("\nEnter data to delete: ");
            int no = scanner.nextInt();
            DoublyLL temp = start;
            boolean found = false;

            do {
                if (temp.data == no) {
                    found = true;
                    if (temp == start && temp == end) {
                        // Only one node in the list
                        start = end = null;
                    } else if (temp == start) {
                        start = start.next;
                        start.prev = end;
                        end.next = start;
                    } else if (temp == end) {
                        end = end.prev;
                        end.next = start;
                        start.prev = end;
                    } else {
                        temp.prev.next = temp.next;
                        temp.next.prev = temp.prev;
                    }
                    System.out.println("\nNode Deleted!");
                    break;
                }
                temp = temp.next;
            } while (temp != start);

            if (!found) {
                System.out.println("\nData not found!");
            }
        }
    }

    // Main Method
    public static void main(String[] args) {
        int ch;
        do {
            System.out.println("\n1. Add New Node");
            System.out.println("2. Traverse (Head to End)");
            System.out.println("3. Traverse (End to Head)");
            System.out.println("4. Delete Node");
            System.out.println("5. Exit");
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
                    delNode();
                    break;
                case 5:
                    System.out.println("\nExited");
                    break;
                default:
                    System.out.println("\nInvalid choice");
            }
        } while (ch != 5);
    }
}
