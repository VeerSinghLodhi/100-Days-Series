#include <iostream>
using namespace std;
struct DoublyLL {
    int data;
    DoublyLL *prev, *next;
} *start, *end;
// Function for add new nodes.
void addNode() {
    DoublyLL *ptr = new DoublyLL();
    if (!ptr) {
        cout << "\nMemory couldn't be allocated";
    } else {
        cout << "\nEnter data: ";
        cin >> ptr->data;
        if (!start) {
            start = end = ptr;
            start->prev = ptr;
            end->next = ptr;
        } else {
            ptr->prev = end;
            ptr->next = start;
            end->next = ptr;
            end = ptr;
            start->prev = end;
        }
        cout << "\nNew Node Added";
    }
}
// Function for traverse or display from start to end nodes.
void traverseHeadToEnd() {
    if (!start) {
        cout << "\nDoubly Linked List is empty!";
    } else {
        DoublyLL *temp = start;
        do {
            cout << "\nData is " << temp->data;
            cout << "\n-----------------------";
            temp = temp->next;
        } while (temp != start);
    }
}
// Function for traverse or display from end to start nodes.
void traverseEndToHead() {
    if (!start) {
        cout << "\nDoubly Linked List is empty!";
    } else {
        DoublyLL *temp = end;
        do {
            cout << "\nData is " << temp->data;
            cout << "\n----------------------";
            temp = temp->prev;
        } while (temp != end);
    }
}
// Let's Start Here
int main() {
    start = end = nullptr;
    int ch;
    do {
        cout << "\n1. Add New Node";
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
                cout << "\nExited";
                break;
            default:
                cout << "\nInvalid choice";
        }
    } while (ch != 4);

    return 0;
}
