#include <iostream>
using namespace std;

struct Queue {
    int data;
    Queue *next;
};
Queue *front = nullptr, *rear = nullptr;
void enqueue() {
    Queue *ptr = new Queue;
    if (ptr == nullptr) {
        cout << "\nMemory couldn't be allocated!";
    } else {
        cout << "\nEnter data: ";
        cin >> ptr->data;
        if (front == nullptr) {
            front = rear = ptr;
        } else {
            rear->next = ptr;
            rear = ptr;
        }
        rear->next = nullptr;
        cout << "\nNew Data added";
    }
}

void dequeue() {
    if (front == nullptr) {
        cout << "\nQueue is Empty!!";
    } else {
        Queue *temp = front;
        front = front->next;
        delete temp;
        cout << "\nDeleted!";
    }
}

void traverse() {
    if (front == nullptr) {
        cout << "\nQueue is Empty!!";
    } else {
        Queue *temp = front;
        while (temp != nullptr) {
            cout << "\nData is " << temp->data;
            cout << "\n-----------------------------";
            temp = temp->next;
        }
    }
}

void isEmpty() {
    if (front == nullptr) {
        cout << "\nQueue is Empty!!";
    } else {
        cout << "\nQueue is not Empty!!";
    }
}
// Let's Start here
int main() {
    int ch;
    do {
        cout << "\n----Queue Operations----";
        cout << "\n1. Enqueue";
        cout << "\n2. Dequeue";
        cout << "\n3. Traverse";
        cout << "\n4. IsEmpty";
        cout << "\n5. Exit";
        cout << "\nSelect a choice: ";
        cin >> ch;

        switch (ch) {
            case 1:
                enqueue();
                break;
            case 2:
                dequeue();
                break;
            case 3:
                traverse();
                break;
            case 4:
                isEmpty();
                break;
            case 5:
                cout << "\nExited!";
                break;
            default:
                cout << "\nInvalid choice";
        }
    } while (ch != 5);

    return 0;
}
