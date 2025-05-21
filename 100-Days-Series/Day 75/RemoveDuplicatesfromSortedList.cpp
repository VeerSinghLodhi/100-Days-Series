#include <iostream>
using namespace std;

class LinkedList {
public:
    int data;
    LinkedList* next;

    // Constructor
    LinkedList(int data) {
        this->data = data;
        this->next = nullptr;
    }
};

class Example {
public:
    LinkedList* head;

    // Constructor to initialize head
    Example() {
        head = nullptr;
    }

    // Add a node to the linked list
    void addNode() {
        int value;
        cout << "Enter data: ";
        cin >> value;

        LinkedList* newNode = new LinkedList(value);
        if (head == nullptr) {
            head = newNode;
        } else {
            LinkedList* temp = head;
            while (temp->next != nullptr) {
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }

    // Traverse the linked list
    void traverse() {
        if (head == nullptr) {
            cout << "Linked List is empty!" << endl;
        } else {
            LinkedList* temp = head;
            while (temp != nullptr) {
                cout << "Data: " << temp->data << endl;
                temp = temp->next;
            }
        }
    }
    // Function to remove duplicates
    void removeDuplicates(){
        if (head == nullptr || head->next == nullptr) {
            return; // Nothing to remove
        }
        LinkedList* current = head;
        while (current->next != nullptr) {
            if (current->data == current->next->data) {
                LinkedList* duplicate = current->next;
                current->next = current->next->next;
                delete duplicate; // Free memory of duplicate node
            } else {
                current = current->next;
            }
        }
    }
};
// Let's Start Here
int main() {
    Example emp;

    int choice;
    do {
        cout << "\n1. Add Node";
        cout << "\n2. Traverse";
        cout << "\n3. Remove Duplicates";
        cout << "\n4. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                emp.addNode();
                break;
            case 2:
                emp.traverse();
                break;
            case 3:
                emp.removeDuplicates();
                break;
            case 4:
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid choice!" << endl;
        }
    } while (choice != 4);

    return 0;
}
