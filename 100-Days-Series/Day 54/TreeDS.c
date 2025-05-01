#include<stdio.h>
#include<stdlib.h> // Include this header for malloc function

// Define a structure for a tree node
struct Tree {
    int data;                 // Holds the value of the node
    struct Tree *right, *left; // Pointers to right and left children
} *root; // Pointer to the root of the tree

// Function to search for the position to insert a new node
struct Tree *search(struct Tree *r, int data) {
    struct Tree *parent; // Parent pointer to keep track of the last valid node
    while (r != NULL) { // Traverse until a NULL node is reached
        if (r->data == data) {
            // If duplicate data is found, return NULL
            return NULL;
        } else if (r->data > data) {
            // Move to the left child if data is less than current node
            parent = r;
            r = r->left;
        } else {
            // Move to the right child if data is greater than current node
            parent = r;
            r = r->right;
        }
    }
    // Return the parent of the potential position for the new node
    return parent;
}

// Function to add a new node to the tree
void addNode() {
    struct Tree *ptr, *parent;
    // Allocate memory for a new node
    ptr = (struct Tree *)malloc(sizeof(struct Tree));
    if (ptr == NULL) {
        // Check if memory allocation fails
        printf("\nMemory could not be allocated");
    } else {
        printf("\nEnter data: ");
        scanf("%d", &ptr->data);
        if (root == NULL) {
            // If the tree is empty, make the new node the root
            root = ptr;
            ptr->left = ptr->right = NULL;
            printf("\nNew Data Added");
        } else {
            // Search for the correct position to insert the new node
            parent = search(root, ptr->data);
            if (parent == NULL) {
                // If duplicate data, do not insert
                printf("\nDuplicate values are not allowed");
            } else {
                // Insert the new node as the left or right child of the parent
                if (parent->data > ptr->data) {
                    parent->left = ptr;
                } else {
                    parent->right = ptr;
                }
                ptr->left = ptr->right = NULL;
                printf("\nNew Data Added");
            }
        }
    }
}

// Function to traverse the tree in Pre-Order (Root, Left, Right)
void traversePreOrder(struct Tree *r) {
    if (r == NULL) {
        return; // Base case: If the node is NULL, return
    }
    printf("\nData is %d", r->data); // Visit the root node
    traversePreOrder(r->left);       // Traverse the left subtree
    traversePreOrder(r->right);      // Traverse the right subtree
}

// Function to traverse the tree in In-Order (Left, Root, Right)
void traverseInOrder(struct Tree *r) {
    if (r == NULL) {
        return; // Base case: If the node is NULL, return
    }
    traverseInOrder(r->left);        // Traverse the left subtree
    printf("\nData is %d", r->data); // Visit the root node
    traverseInOrder(r->right);       // Traverse the right subtree
}

// Function to traverse the tree in Post-Order (Left, Right, Root)
void traversePostOrder(struct Tree *r) {
    if (r == NULL) {
        return; // Base case: If the node is NULL, return
    }
    traversePostOrder(r->left);      // Traverse the left subtree
    traversePostOrder(r->right);     // Traverse the right subtree
    printf("\nData is %d", r->data); // Visit the root node
}

void main() {
    root = NULL; // Initialize the root as NULL
    int ch;      // Variable to store user choice
    do {
        // Display menu options
        printf("\n1. Add New Data");
        printf("\n2. Traverse (Pre Order)");
        printf("\n3. Traverse (In Order)");
        printf("\n4. Traverse (Post Order)");
        printf("\n5. Exit");
        printf("\nSelect a choice: ");
        scanf("%d", &ch); // Read user choice

        // Perform actions based on the user's choice
        if (ch == 1) {
            addNode(); // Add a new node to the tree
        } else if (ch == 2) {
            if (root == NULL) {
                printf("\nTree is Empty...");
            } else {
                traversePreOrder(root); // Pre-Order Traversal
            }
        } else if (ch == 3) {
            if (root == NULL) {
                printf("\nTree is Empty...");
            } else {
                traverseInOrder(root); // In-Order Traversal
            }
        } else if (ch == 4) {
            if (root == NULL) {
                printf("\nTree is Empty...");
            } else {
                traversePostOrder(root); // Post-Order Traversal
            }
        } else if (ch == 5) {
            printf("\nExiting..."); // Exit the program
        } else {
            printf("\nInvalid choice"); // Handle invalid choice
        }
    } while (ch != 5); // Repeat until the user chooses to exit
}
