#include <iostream>
using namespace std;
// Define a structure for a tree node
struct Tree {
    int data;            // Holds the value of the node
    Tree* left;          // Pointer to the left child
    Tree* right;         // Pointer to the right child
};
// Global pointer to the root of the tree
Tree* root = nullptr;
// Function to search for the position to insert a new node
Tree* searchRoot(Tree* r, int data) {
    Tree* parent = nullptr;
    while (r != nullptr) {
        if (r->data == data) {
            // Return nullptr if duplicate data is found
            return nullptr;
        } else if (r->data > data) {
            // Move to the left child if data is less than the current node
            parent = r;
            r = r->left;
        } else {
            // Move to the right child if data is greater than the current node
            parent = r;
            r = r->right;
        }
    }
    return parent; // Return the parent of the potential position for the new node
}

// Function to add a new node to the tree
void addNode() {
    Tree* ptr = new Tree(); // Allocate memory for a new node
    if (ptr == nullptr) {
        cout << "\nMemory could not be allocated";
    } else {
        cout << "\nEnter data: ";
        cin >> ptr->data;

        if (root == nullptr) {
            // If the tree is empty, make the new node the root
            root = ptr;
            ptr->left = ptr->right = nullptr;
            cout << "\nNew Data Added";
        } else {
            // Search for the correct position to insert the new node
            Tree* parent = searchRoot(root, ptr->data);
            if (parent == nullptr) {
                cout << "\nDuplicate values are not allowed";
            } else {
                if (parent->data > ptr->data) {
                    // Insert as the left child
                    parent->left = ptr;
                } else {
                    // Insert as the right child
                    parent->right = ptr;
                }
                ptr->left = ptr->right = nullptr;
                cout << "\nNew Data Added";
            }
        }
    }
}

// Function to traverse the tree in Pre-Order (Root, Left, Right)
void traversePreOrder(Tree* r) {
    if (r == nullptr) return;
    cout << "\nData is " << r->data;
    traversePreOrder(r->left);
    traversePreOrder(r->right);
}

// Function to traverse the tree in In-Order (Left, Root, Right)
void traverseInOrder(Tree* r) {
    if (r == nullptr) return;
    traverseInOrder(r->left);
    cout << "\nData is " << r->data;
    traverseInOrder(r->right);
}

// Function to traverse the tree in Post-Order (Left, Right, Root)
void traversePostOrder(Tree* r) {
    if (r == nullptr) return;
    traversePostOrder(r->left);
    traversePostOrder(r->right);
    cout << "\nData is " << r->data;
}

// Main function
int main() {
    int ch; // Variable to store user choice
    do {
        // Display menu options
        cout << "\n1. Add New Data";
        cout << "\n2. Traverse (Pre Order)";
        cout << "\n3. Traverse (In Order)";
        cout << "\n4. Traverse (Post Order)";
        cout << "\n5. Exit";
        cout << "\nSelect a choice: ";
        cin >> ch;

        // Perform actions based on the user's choice
        switch (ch) {
            case 1:
                addNode(); // Add a new node to the tree
                break;
            case 2:
                if (root == nullptr) {
                    cout << "\nTree is Empty...";
                } else {
                    traversePreOrder(root); // Pre-Order Traversal
                }
                break;
            case 3:
                if (root == nullptr) {
                    cout << "\nTree is Empty...";
                } else {
                    traverseInOrder(root); // In-Order Traversal
                }
                break;
            case 4:
                if (root == nullptr) {
                    cout << "\nTree is Empty...";
                } else {
                    traversePostOrder(root); // Post-Order Traversal
                }
                break;
            case 5:
                cout << "\nExiting...";
                break;
            default:
                cout << "\nInvalid choice";
        }
    } while (ch != 5); // Repeat until the user chooses to exit

    return 0;
}

