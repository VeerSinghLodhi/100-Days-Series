#include<stdio.h>
#include<stdlib.h>
struct Queue{
    int data;
    struct Queue *next;
}*front,*rear;
void enqueue(){
    struct Queue *ptr;
    ptr=(struct Queue*)malloc(sizeof(struct Queue));
    if(ptr==NULL){
        printf("\nMemory couldn't allocated!");
    }else{
        printf("\nEnter data : ");
        scanf("%d",&ptr->data);
        if(front==NULL){
            front=rear=ptr;
        }else{
            rear->next=ptr;
            rear=ptr;
        }
        rear->next=NULL;
        printf("\nNew Data added");
    }
}
void dequeue(){
    if(front==NULL){
        printf("\nQueue is Empty!!");
    }else{
        struct Queue *temp;
        temp=front;
        front=front->next;
        free(temp);
        printf("\nDeleted!");
    }
}
void traverse(){
    if(front==NULL){
        printf("\nQueue is Empty!!");
    }else{
        struct Queue *temp;
        for(temp=front;temp!=NULL;temp=temp->next){
            printf("\nData is %d",temp->data);
            printf("\n-----------------------------");
        }
    }
}
void isEmpty(){
    if(front==NULL){
        printf("\nQueue is Empty!!");
    }else{
        printf("\nQueue is not Empty!!");
    }
}
// Let's Start here
void main(){
    int ch;
    do{
        printf("\n----Queue Operations----");
        printf("\n1. Enqueue");
        printf("\n2. Dequeue");
        printf("\n3. Traverse");
        printf("\n4. IsEmpty");
        printf("\n5. Exit");
        printf("\nSelect a choice : ");
        scanf("%d",&ch);
        if(ch==1)
            enqueue();
        else if(ch==2){
            dequeue();
        }else if(ch==3){
            traverse();
        }else if(ch==4){
            isEmpty();
        }else if(ch==5){
            printf("\nExited!");
        }else {
            printf("\nInvalid choice");
        }
    }while(ch!=5);
}