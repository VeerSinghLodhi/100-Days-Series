import java.util.Scanner;

// Define a class for the tree node
class Tree {
    int data;           // Holds the value of the node
    Tree left, right;   // Pointers to left and right children

    public Tree(int data) {
        this.data = data;
        this.left = null;
        this.right = null;
    }
}

public class TreeDS {
    private Tree root; // Root node of the tree

    public TreeDS() {
        root = null;
    }

    // Function to search for the position to insert a new node
    private Tree search(Tree r, int data) {
        Tree parent = null;
        while (r != null) {
            if (r.data == data) {
                return null; // Duplicate data not allowed
            } else if (r.data > data) {
                parent = r;
                r = r.left; // Move to the left child
            } else {
                parent = r;
                r = r.right; // Move to the right child
            }
        }
        return parent; // Return the parent of the potential position
    }

    // Function to add a new node to the tree
    public void addNode() {
        Scanner sc = new Scanner(System.in);
        System.out.print("\nEnter data: ");
        int data = sc.nextInt();
        Tree newNode = new Tree(data);

        if (root == null) {
            root = newNode; // If the tree is empty, make the new node the root
            System.out.println("\nNew Data Added");
        } else {
            Tree parent = search(root, data);
            if (parent == null) {
                System.out.println("\nDuplicate values are not allowed");
            } else {
                if (parent.data > data) {
                    parent.left = newNode; // Insert as the left child
                } else {
                    parent.right = newNode; // Insert as the right child
                }
                System.out.println("\nNew Data Added");
            }
        }
    }

    // Function to traverse the tree in Pre-Order (Root, Left, Right)
    public void traversePreOrder(Tree r) {
        if (r == null) return;
        System.out.println("Data is " + r.data);
        traversePreOrder(r.left);
        traversePreOrder(r.right);
    }

    // Function to traverse the tree in In-Order (Left, Root, Right)
    public void traverseInOrder(Tree r) {
        if (r == null) return;
        traverseInOrder(r.left);
        System.out.println("Data is " + r.data);
        traverseInOrder(r.right);
    }

    // Function to traverse the tree in Post-Order (Left, Right, Root)
    public void traversePostOrder(Tree r) {
        if (r == null) return;
        traversePostOrder(r.left);
        traversePostOrder(r.right);
        System.out.println("Data is " + r.data);
    }

    // Main method
    public static void main(String[] args) {
        TreeDS tree = new TreeDS();
        Scanner sc = new Scanner(System.in);
        int choice;

        do {
            // Display menu options
            System.out.println("\n1. Add New Data");
            System.out.println("2. Traverse (Pre Order)");
            System.out.println("3. Traverse (In Order)");
            System.out.println("4. Traverse (Post Order)");
            System.out.println("5. Exit");
            System.out.print("Select a choice: ");
            choice = sc.nextInt();

            // Perform actions based on the user's choice
            switch (choice) {
                case 1:
                    tree.addNode();
                    break;
                case 2:
                    if (tree.root == null) {
                        System.out.println("\nTree is Empty...");
                    } else {
                        tree.traversePreOrder(tree.root);
                    }
                    break;
                case 3:
                    if (tree.root == null) {
                        System.out.println("\nTree is Empty...");
                    } else {
                        tree.traverseInOrder(tree.root);
                    }
                    break;
                case 4:
                    if (tree.root == null) {
                        System.out.println("\nTree is Empty...");
                    } else {
                        tree.traversePostOrder(tree.root);
                    }
                    break;
                case 5:
                    System.out.println("\nExiting...");
                    break;
                default:
                    System.out.println("\nInvalid choice");
            }
        } while (choice != 5);
    }
}

