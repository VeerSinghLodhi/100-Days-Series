#include <stdio.h>
#include <stdlib.h>
// Define the structure for a circular doubly linked list
struct DoublyLL {
    int data;
    struct DoublyLL *prev, *next;
} *start = NULL, *end = NULL;
// Function to add a node to the list
void addNode() {
    struct DoublyLL *ptr;
    ptr = (struct DoublyLL *)malloc(sizeof(struct DoublyLL));
    if (ptr == NULL) {
        printf("\nMemory allocation failed.");
        return;
    }
    printf("\nEnter Data: ");
    scanf("%d", &ptr->data);
    ptr->prev = ptr->next = NULL;
    if (start == NULL) {
        // First node in the list
        start = end = ptr;
        start->next = start->prev = start;
    } else {
        int choice;
        printf("\nWhere do you want to insert the new node?");
        printf("\n1. At the Beginning");
        printf("\n2. In the Middle");
        printf("\n3. At the End");
        printf("\nSelect a choice: ");
        scanf("%d", &choice);
        if (choice == 1) {
            // Insert at the beginning
            ptr->next = start;
            ptr->prev = end;
            start->prev = ptr;
            end->next = ptr;
            start = ptr;
        } else if (choice == 2) {
            // Insert in the middle
            int no;
            printf("\nEnter data after which you want to insert the new record: ");
            scanf("%d", &no);
            struct DoublyLL *temp = start;
            int found = 0;
            do {
                if (temp->data == no) {
                    ptr->next = temp->next;
                    ptr->prev = temp;
                    temp->next->prev = ptr;
                    temp->next = ptr;
                    found = 1;
                    break;
                }
                temp = temp->next;
            } while (temp != start);

            if (!found) {
                printf("\nData %d not found. Node not added.", no);
                free(ptr);
                return;
            }
        } else if (choice == 3) {
            // Insert at the end
            ptr->prev = end;
            ptr->next = start;
            end->next = ptr;
            start->prev = ptr;
            end = ptr;
        } else {
            printf("\nInvalid choice. Node not added.");
            free(ptr);
            return;
        }
    }
    printf("\nNew Node Added Successfully.");
}

// Function to traverse the list from head to end
void traverseHeadToEnd() {
    if (start == NULL) {
        printf("\nLinked List is empty.");
        return;
    }

    struct DoublyLL *temp = start;
    printf("\nTraversing from Head to End:");
    do {
        printf("\nData: %d", temp->data);
        temp = temp->next;
    } while (temp != start);
}

// Function to traverse the list from end to head
void traverseEndToHead() {
    if (start == NULL) {
        printf("\nLinked List is empty.");
        return;
    }

    struct DoublyLL *temp = end;
    printf("\nTraversing from End to Head:");
    do {
        printf("\nData: %d", temp->data);
        temp = temp->prev;
    } while (temp != end);
}

// Main function
void main() {
    int ch;
    do {
        printf("\n\nMenu:");
        printf("\n1. Add New Data");
        printf("\n2. Traverse (Head to End)");
        printf("\n3. Traverse (End to Head)");
        printf("\n4. Exit");
        printf("\nSelect a choice: ");
        scanf("%d", &ch);

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
                printf("\nExiting...");
                break;
            default:
                printf("\nInvalid choice. Try again.");
        }
    } while (ch != 4);
}
