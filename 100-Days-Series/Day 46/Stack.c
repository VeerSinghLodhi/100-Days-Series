#include<stdio.h>
#include<stdlib.h>
struct Stack{
    int data;
    struct Stack *next;
}*top;
void push() {
    struct Stack *ptr;
    ptr = (struct Stack*)malloc(sizeof(struct Stack));
    if (ptr == NULL) {
        printf("\nMemory couldn't be allocated\n");
    } else {
        printf("\nEnter data: ");
        scanf("%d", &ptr->data);
        if (top == NULL) {
            ptr->next = NULL; // Initialize 'next' to NULL
        } else {
            ptr->next = top; // Point new node's 'next' to the current `top`
        }
        top = ptr; // Update 'top' to the new node
        printf("\nNew data added\n");
    }
}
void pop(){
    if(top==NULL){
        printf("\nStack is empty!!");
    }else{
        struct Stack *temp;
        temp=top;
        top=top->next;
        printf("\nPopped element is : %d",temp->data);
        free(temp);
    }
}
void peek(){
    if(top==NULL){
        printf("\nStack is empty!!");
    }else{
        printf("\nTop Element is %d",top->data);
        printf("\n---------------------");
    }
}
void traverse(){
    if(top==NULL){
        printf("\nStack is empty!!");
    }else{
        struct Stack *ptr;
        for(ptr=top;ptr!=NULL;ptr=ptr->next){
            printf("\nData is %d",ptr->data);
            printf("\n---------------------");
        }
    }
}
void isEmpty(){
    if(top==NULL){
        printf("\nStack is Empty");
    }
    else{
        printf("\nStack is not Empty");
    }
    printf("\n-----------------------------------");
}
void main(){
    top=NULL;
    int ch;
    do{
        printf("\n1. Push");
        printf("\n2. Pop");
        printf("\n3. Peek");
        printf("\n4. IsEmpty");
        printf("\n5. Traverse");
        printf("\n6. Exit");
        printf("\nSelect a choice : ");
        scanf("%d",&ch);
        if(ch==1){
            push();
        }else if(ch==2){
            pop();            
        }else if(ch==3){
            peek();
        }else if(ch==4){
            isEmpty();
        }else if(ch==5){
            traverse();
        }else if(ch==6){
            printf("\nExited");
        }else{
            printf("\nInvalid choice!");
        }
    }while(ch!=6);
}