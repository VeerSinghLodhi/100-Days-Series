import java.util.Scanner;
// Define the Node class for a circular doubly linked list
class DoublyLL {
    int data;
    DoublyLL prev, next;
    // Constructor
    DoublyLL(int value) {
        this.data = value;
        this.prev = null;
        this.next = null;
    }
}
public class DoublyLinkedList {
    private DoublyLL start = null;
    private DoublyLL end = null;
    // Function to add a node to the list
    public void addNode() {
        Scanner scanner = new Scanner(System.in);
        System.out.print("\nEnter Data: ");
        int value = scanner.nextInt();
        DoublyLL newNode = new DoublyLL(value);
        if (start == null) {
            // First node in the list
            start = end = newNode;
            start.next = start.prev = start;
        } else {
            System.out.println("\nWhere do you want to insert the new node?");
            System.out.println("1. At the Beginning");
            System.out.println("2. In the Middle");
            System.out.println("3. At the End");
            System.out.print("Select a choice: ");
            int choice = scanner.nextInt();
            if (choice == 1) {
                // Insert at the beginning
                newNode.next = start;
                newNode.prev = end;
                start.prev = newNode;
                end.next = newNode;
                start = newNode;
            } else if (choice == 2) {
                // Insert in the middle
                System.out.print("\nEnter data after which you want to insert the new record: ");
                int afterData = scanner.nextInt();
                DoublyLL temp = start;
                boolean found = false;
                do {
                    if (temp.data == afterData) {
                        newNode.next = temp.next;
                        newNode.prev = temp;
                        temp.next.prev = newNode;
                        temp.next = newNode;
                        found = true;
                        break;
                    }
                    temp = temp.next;
                } while (temp != start);

                if (!found) {
                    System.out.println("\nData " + afterData + " not found. Node not added.");
                    return;
                }
            } else if (choice == 3) {
                // Insert at the end
                newNode.prev = end;
                newNode.next = start;
                end.next = newNode;
                start.prev = newNode;
                end = newNode;
            } else {
                System.out.println("\nInvalid choice. Node not added.");
                return;
            }
        }
        System.out.println("\nNew Node Added Successfully.");
    }
    // Function to traverse the list from head to end
    public void traverseHeadToEnd() {
        if (start == null) {
            System.out.println("\nLinked List is empty.");
            return;
        }
        DoublyLL temp = start;
        System.out.println("\nTraversing from Head to End:");
        do {
            System.out.println("Data: " + temp.data);
            temp = temp.next;
        } while (temp != start);
    }
    // Function to traverse the list from end to head
    public void traverseEndToHead() {
        if (start == null) {
            System.out.println("\nLinked List is empty.");
            return;
        }
        DoublyLL temp = end;
        System.out.println("\nTraversing from End to Head:");
        do {
            System.out.println("Data: " + temp.data);
            temp = temp.prev;
        } while (temp != end);
    }
    // Main function
    public static void main(String[] args) {
        DoublyLinkedList list = new DoublyLinkedList();
        Scanner scanner = new Scanner(System.in);
        int choice;
        do {
            System.out.println("\n\nMenu:");
            System.out.println("1. Add New Data");
            System.out.println("2. Traverse (Head to End)");
            System.out.println("3. Traverse (End to Head)");
            System.out.println("4. Exit");
            System.out.print("Select a choice: ");
            choice = scanner.nextInt();
            switch (choice) {
                case 1:
                    list.addNode();
                    break;
                case 2:
                    list.traverseHeadToEnd();
                    break;
                case 3:
                    list.traverseEndToHead();
                    break;
                case 4:
                    System.out.println("\nExiting...");
                    break;
                default:
                    System.out.println("\nInvalid choice. Try again.");
            }
        } while (choice != 4);

        scanner.close();
    }
}
