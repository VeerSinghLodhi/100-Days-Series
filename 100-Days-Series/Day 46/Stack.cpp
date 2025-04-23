#include <iostream>
using namespace std;
struct Stack {
    int data;
    Stack* next;
};
Stack* top = nullptr;
void push() {
    Stack* ptr = new Stack();
    if (!ptr) {
        cout << "\nMemory couldn't be allocated\n";
    } else {
        cout << "\nEnter data: ";
        cin >> ptr->data;
        ptr->next = top;
        top = ptr;
        cout << "\nNew data added\n";
    }
}
void pop() {
    if (!top) {
        cout << "\nStack is empty!!\n";
    } else {
        Stack* temp = top;
        top = top->next;
        cout << "\nPopped element is: " << temp->data << "\n";
        delete temp;
    }
}
void peek() {
    if (!top) {
        cout << "\nStack is empty!!\n";
    } else {
        cout << "\nTop element is: " << top->data << "\n---------------------\n";
    }
}
void traverse() {
    if (!top) {
        cout << "\nStack is empty!!\n";
    } else {
        Stack* ptr = top;
        while (ptr) {
            cout << "\nData is: " << ptr->data << "\n---------------------\n";
            ptr = ptr->next;
        }
    }
}
void isEmpty() {
    if (!top) {
        cout << "\nStack is Empty\n";
    } else {
        cout << "\nStack is not Empty\n";
    }
    cout << "-----------------------------------\n";
}
// Let's Start here
int main() {
    int choice;
    do {
        cout << "\n1. Push\n2. Pop\n3. Peek\n4. IsEmpty\n5. Traverse\n6. Exit\nSelect a choice: ";
        cin >> choice;

        switch (choice) {
            case 1: push(); break;
            case 2: pop(); break;
            case 3: peek(); break;
            case 4: isEmpty(); break;
            case 5: traverse(); break;
            case 6: cout << "\nExited\n"; break;
            default: cout << "\nInvalid choice!\n";
        }
    } while (choice != 6);
    return 0;
}
