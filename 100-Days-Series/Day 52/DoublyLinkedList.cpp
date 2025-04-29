#include <iostream>
using namespace std;

struct DoublyLL {
    int data;
    DoublyLL *prev, *next;
};
struct DoublyLL *start = nullptr;
struct DoublyLL *end = nullptr;

// Function to add new nodes.
void addNode() {
    DoublyLL *ptr = new DoublyLL();
    if (ptr == nullptr) {
        cout << "\nMemory couldn't be allocated";
    } else {
        cout << "\nEnter data: ";
        cin >> ptr->data;
        if (start == nullptr) {
            start = end = ptr;
            start->prev = end;
            end->next = start;
        } else {
            ptr->prev = end;
            ptr->next = start;
            end->next = ptr;
            start->prev = ptr;
            end = ptr;
        }
        cout << "\nNew Node Added";
    }
}
// Function to traverse from head to end.
void traverseHeadToEnd() {
    if (start == nullptr) {
        cout << "\nDoubly Linked List is empty!";
    } else {
        DoublyLL *temp = start;
        do {
            cout << "\nData: " << temp->data;
            cout << "\n-----------------------";
            temp = temp->next;
        } while (temp != start);
    }
}

// Function to traverse from end to head.
void traverseEndToHead() {
    if (start == nullptr) {
        cout << "\nDoubly Linked List is empty!";
    } else {
        DoublyLL *temp = end;
        do {
            cout << "\nData: " << temp->data;
            cout << "\n----------------------";
            temp = temp->prev;
        } while (temp != end);
    }
}

// Function to delete a node.
void delNode() {
    if (start == nullptr) {
        cout << "\nDoubly Linked List is empty!";
    } else {
        int no, res = 0;
        cout << "\nEnter data to delete: ";
        cin >> no;

        DoublyLL *temp = start;
        do {
            if (temp->data == no) {
                if (temp == start && temp == end) {
                    // Only one node in the list
                    start = end = nullptr;
                } else if (temp == start) {
                    start = start->next;
                    start->prev = end;
                    end->next = start;
                } else if (temp == end) {
                    end = end->prev;
                    end->next = start;
                    start->prev = end;
                } else {
                    temp->prev->next = temp->next;
                    temp->next->prev = temp->prev;
                }
                cout << "\nDeleted!";
                delete temp;
                res = 1;
                break;
            }
            temp = temp->next;
        } while (temp != start);

        if (res == 0) {
            cout << "\nData not found!";
        }
    }
}

// Main function.
int main() {
    int ch;
    do {
        cout << "\n1. Add New Node";
        cout << "\n2. Traverse (Head to End)";
        cout << "\n3. Traverse (End to Head)";
        cout << "\n4. Delete Node";
        cout << "\n5. Exit";
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
                delNode();
                break;
            case 5:
                cout << "\nExited";
                break;
            default:
                cout << "\nInvalid choice";
        }
    } while (ch != 5);

    return 0;
}
