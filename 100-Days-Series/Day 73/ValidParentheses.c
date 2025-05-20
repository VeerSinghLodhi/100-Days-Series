#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// Define Stack Node
struct Stack {
    char data;
    struct Stack *next;
} *top = NULL;
// Push Function
void push(char ch) {
    struct Stack *ptr = (struct Stack *)malloc(sizeof(struct Stack));
    ptr->data = ch;
    ptr->next = top;
    top = ptr;
}
// Pop Function
char pop() {
    if (top == NULL) {
        return '\0'; // Return null character if stack is empty
    } else {
        struct Stack *temp = top;
        char ch = temp->data;
        top = top->next;
        free(temp);
        return ch;
    }
}
// IsEmpty Function
int isEmpty() {
    return top == NULL;
}
// Check Matching Pairs
int isMatchingPair(char open, char close) {
    return (open == '(' && close == ')') ||
           (open == '[' && close == ']') ||
           (open == '{' && close == '}');
}
// Validate Parentheses
int isValidParentheses(char arr[], int size) {
    for (int i = 0; i < size; i++) {
        char ch = arr[i];
        if (ch == '(' || ch == '[' || ch == '{') {
            push(ch);
        } else if (ch == ')' || ch == ']' || ch == '}') {
            if (isEmpty() || !isMatchingPair(pop(), ch)) {
                return 0; // Invalid if no match
            }
        }
    }
    return isEmpty(); // Valid only if stack is empty
}
// Free Stack Memory
void freeStack() {
    while (!isEmpty()) {
        pop();
    }
}
// Let's Start Here
void main() {
    char arr[] = "()[]{}"; // True
    int size = strlen(arr);
    int res = isValidParentheses(arr, size);
    printf("\n%d", res);
    if (res == 1) {
        printf("\nValid Parentheses");
    } else {
        printf("\nInvalid Parentheses");
    }
    freeStack(); // Clean up stack memory
}
