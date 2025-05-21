#include <stdio.h>
#include <stdlib.h>
struct LinkedList {
    int data;
    struct LinkedList *next;
} *head;
// Function to add a node
void addNode() {
    struct LinkedList *ptr;
    ptr = (struct LinkedList *)malloc(sizeof(struct LinkedList));
    printf("\nEnter Data: ");
    scanf("%d", &ptr->data);
    ptr->next = NULL;

    if (head == NULL) {
        head = ptr;
    } else {
        struct LinkedList *temp;
        for (temp = head; temp->next; temp = temp->next)
            ;
        temp->next = ptr;
    }
}
// Function to traverse the list
void traverse() {
    if (head == NULL) {
        printf("\nLinked List is empty!!\n");
    } else {
        struct LinkedList *temp;
        for (temp = head; temp; temp = temp->next) {
            printf("\nData is %d", temp->data);
            printf("\n---------------------");
        }
        printf("\n");
    }
}
// Function to remove duplicates
struct LinkedList *removeDuplicates(struct LinkedList *h) {
    if (h == NULL) {
        return NULL;
    } else {
        struct LinkedList *current = h;
        while (current->next != NULL) {
            if (current->data == current->next->data) {
                struct LinkedList *temp = current->next;
                current->next = current->next->next;
                free(temp);
            } else {
                current = current->next;
            }
        }
        return h;
    }
}
// Let's Start Here
void main() {
    head = NULL;
    int ch;
    do {
        printf("\n1. Add New Node");
        printf("\n2. Traverse");
        printf("\n3. Remove Duplicates");
        printf("\n4. Exit");
        printf("\nSelect a choice: ");
        scanf("%d", &ch);
        if (ch == 1) {
            addNode();
        } else if (ch == 2) {
            traverse();
        } else if (ch == 3) {
            head = removeDuplicates(head);
        }
    } while (ch != 4);
}
