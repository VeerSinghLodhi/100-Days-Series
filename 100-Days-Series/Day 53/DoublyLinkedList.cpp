#include <iostream>
using namespace std;

// Define the structure for a circular doubly linked list
class DoublyLL {
public:
    int data;
    DoublyLL *prev, *next;
    DoublyLL(int value) : data(value), prev(nullptr), next(nullptr) {}
};
DoublyLL *start = nullptr, *last = nullptr;
// Function to add a node to the list
void addNode() {
    int value;
    cout << "\nEnter Data: ";
    cin >> value;
    DoublyLL *ptr = new DoublyLL(value);
    if (!ptr) {
        cout << "\nMemory allocation failed.";
        return;
    }
    if (start == nullptr) {
        // First node in the list
        start = last = ptr;
        start->next = start->prev = start;
    } else {
        int choice;
        cout << "\nWhere do you want to insert the new node?";
        cout << "\n1. At the Beginning";
        cout << "\n2. In the Middle";
        cout << "\n3. At the End";
        cout << "\nSelect a choice: ";
        cin >> choice;
        if (choice == 1) {
            // Insert at the beginning
            ptr->next = start;
            ptr->prev = last;
            start->prev = ptr;
            last->next = ptr;
            start = ptr;
        } else if (choice == 2) {
            // Insert in the middle
            int no;
            cout << "\nEnter data after which you want to insert the new record: ";
            cin >> no;
            DoublyLL *temp = start;
            bool found = false;
            do {
                if (temp->data == no) {
                    ptr->next = temp->next;
                    ptr->prev = temp;
                    temp->next->prev = ptr;
                    temp->next = ptr;
                    found = true;
                    break;
                }
                temp = temp->next;
            } while (temp != start);
            if (!found) {
                cout << "\nData " << no << " not found. Node not added.";
                delete ptr;
                return;
            }
        } else if (choice == 3) {
            // Insert at the end
            ptr->prev = last;
            ptr->next = start;
            last->next = ptr;
            start->prev = ptr;
            last = ptr;
        } else {
            cout << "\nInvalid choice. Node not added.";
            delete ptr;
            return;
        }
    }
    cout << "\nNew Node Added Successfully.";
}

// Function to traverse the list from head to end
void traverseHeadToEnd() {
    if (start == nullptr) {
        cout << "\nLinked List is empty.";
        return;
    }
    DoublyLL *temp = start;
    cout << "\nTraversing from Head to End:";
    do {
        cout << "\nData: " << temp->data;
        temp = temp->next;
    } while (temp != start);
}
// Function to traverse the list from end to head
void traverseEndToHead() {
    if (start == nullptr) {
        cout << "\nLinked List is empty.";
        return;
    }
    DoublyLL *temp = last;
    cout << "\nTraversing from End to Head:";
    do {
        cout << "\nData: " << temp->data;
        temp = temp->prev;
    } while (temp != last);
}
// Main function
int main() {
    int ch;
    do {
        cout << "\n\nMenu:";
        cout << "\n1. Add New Data";
        cout << "\n2. Traverse (Head to End)";
        cout << "\n3. Traverse (End to Head)";
        cout << "\n4. Exit";
        cout << "\nSelect a choice: ";
        cin >> ch;
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
                cout << "\nExiting...";
                break;
            default:
                cout << "\nInvalid choice. Try again.";
        }
    } while (ch != 4);

    return 0;
}
