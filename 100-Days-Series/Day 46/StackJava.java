import java.util.Scanner;
class Stack {
    int data;
    Stack next;
}
public class StackJava {
    static Stack top = null;
    static void push() {
        Scanner sc = new Scanner(System.in);
        Stack newNode = new Stack();
        System.out.print("\nEnter data: ");
        newNode.data = sc.nextInt();
        newNode.next = top;
        top = newNode;
        System.out.println("New data added");
    }
    static void pop() {
        if (top == null) {
            System.out.println("Stack is empty!!");
        } else {
            System.out.println("Popped element is: " + top.data);
            top = top.next;
        }
    }
    static void peek() {
        if (top == null) {
            System.out.println("Stack is empty!!");
        } else {
            System.out.println("Top element is: " + top.data);
        }
    }
    static void traverse() {
        if (top == null) {
            System.out.println("Stack is empty!!");
        } else {
            Stack temp = top;
            while (temp != null) {
                System.out.println("Data is: " + temp.data);
                temp = temp.next;
            }
        }
    }
    static void isEmpty() {
        if (top == null) {
            System.out.println("Stack is Empty");
        } else {
            System.out.println("Stack is not Empty");
        }
    }
    // Main Method
    public static void main(String[] args) {
        // Let's Start here
        Scanner sc = new Scanner(System.in);
        int choice;
        do {
            System.out.println("\n1. Push\n2. Pop\n3. Peek\n4. IsEmpty\n5. Traverse\n6. Exit");
            System.out.print("Select a choice: ");
            choice = sc.nextInt();
            switch (choice) {
                case 1 -> push();
                case 2 -> pop();
                case 3 -> peek();
                case 4 -> isEmpty();
                case 5 -> traverse();
                case 6 -> System.out.println("Exited");
                default -> System.out.println("Invalid choice!");
            }
        } while (choice != 6);
    }
}
