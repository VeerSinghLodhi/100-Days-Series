#include<stdio.h>
#include<stdlib.h>
struct DoublyLL{
    int data;
    struct DoublyLL *prev,*next;
}*start,*end;
// Function for add new nodes
void addNode(){
    struct DoublyLL *ptr;
    ptr=(struct DoublyLL*)malloc(sizeof(struct DoublyLL));
    if(ptr==NULL){
        printf("\nMemory couldn't Allocated");
    }else{
        printf("\nEnter data : ");
        scanf("%d",&ptr->data);
        if(start==NULL){
            start=end=ptr;
            start->prev=ptr;
            end->next=ptr;
        }else{
            ptr->prev=end;
            ptr->next=start;
            end->next=ptr;
            end=ptr;
            start->prev=end;
        }
        printf("\nNew Node Added");
    }
}
// Function for traverse or display from start to end nodes.
void traverseHeadToEnd(){
    if(start==NULL){
        printf("\nDoubly Linked List is empty!");
    }else{
        struct DoublyLL *temp=end;
        do{
            printf("\nData is %d",temp->data);
            printf("\n-----------------------");
            temp=temp->next;
        }while(temp!=start);
    }
}
// Function for traverse or display from end to tart nodes.
void traverseEndToHead(){
    if(start==NULL){
        printf("\nDoubly Linked List is empty!");
    }else{
        struct DoublyLL *temp=end;
        do{
            printf("\nData is %d",temp->data);
            printf("\n----------------------");
            temp=temp->next;
        }while(temp!=end);
    }
}
// Let' Start Here
void main(){
    start=end=NULL;
    int ch;
    do{
        printf("\n1. Add New Node");
        printf("\n2. Traverse (Head to End)");
        printf("\n3. Traverse (End to Head)");
        printf("\n4. Exit");
        printf("\nSelect a choice : ");
        scanf("%d",&ch);
        if(ch==1){
            addNode();
        }else if(ch==2){
            traverseHeadToEnd();
        }else if(ch==3){
            traverseEndToHead();
        }else if(ch==4){
            printf("\nExited");
        }else{
            printf("\nInvalid choice");
        }
    }while(ch!=4);
}