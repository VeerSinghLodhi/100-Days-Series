#include<stdio.h>
#include<stdlib.h>
// Structure definition for a linked list node
struct LinkedList{
    int data;
    struct LinkedList *next;
}*start;
// Function to create a new node
struct LinkedList *createNode(){
    struct LinkedList *ptr;
    ptr=(struct LinkedList*)malloc(sizeof(struct LinkedList));
    if(ptr==NULL){
        return NULL;
    }else{
        printf("\nEnter Data : ");
        scanf("%d",&ptr->data);
        return ptr;
    }
}
// Function to add a node at the beginning of the linked list
void addAtBegin(){
    struct LinkedList *ptr;
    ptr=createNode();
    if(ptr==NULL){
        printf("\nMemory couldn't allocated");
    }else{
        ptr->next=start;
        start=ptr;
        printf("\nNew Node Added");
    }
}
// Function to add a node in the middle of the linked list
void addAtMiddle(){
    if(start==NULL){
        printf("\nLinked List is empty");
    }else{
        struct LinkedList *ptr,*temp;
        ptr=createNode();
        int no,res=0;
        printf("\nEnter data after which you want to insert the new node : ");
        scanf("%d",&no);
        for(temp=start;(temp);temp=temp->next){
            if(temp->data==no){
                ptr->next=temp->next;
                temp->next=ptr;
                printf("\nNew Node Added");
                res=1;
                break;
            }
        }
        if(!res){
            printf("\nData is not found!!");
        }
    }
}
// Function to add a node at the end of the linked list
void addAtEnd(){
    struct LinkedList *ptr;
    ptr=createNode();
    if(ptr==NULL){
        printf("\nMemory couldn't allocated");
    }else{
        if(start==NULL){
            start=ptr;
            start->next=NULL;
        }
        struct LinkedList *temp,*last;
        for(temp=start;(temp);temp=temp->next){
            last=temp;
        }
        last->next=ptr;
        ptr->next=NULL;
    }
    printf("\nNew Node Added");
}
// Function to traverse and display the linked list
void traverse(){
    if(start==NULL){
        printf("\nLinked List is empty!");
    }else{
        struct LinkedList *temp;
        for(temp=start;(temp);temp=temp->next){
            printf("\nData is %d",temp->data);
            printf("\n-------------------");
        }
    }
}
// Let's Start here
void main(){
    int ch;
    start=NULL;
    do{
        printf("\n1. Add at the Beginning");
        printf("\n2. Add at the Middle");
        printf("\n3. Add at the End");
        printf("\n4. Traverse");
        printf("\n5. Exit");
        printf("\nSelect a choice : ");
        scanf("%d",&ch);
        if(ch==1){
            addAtBegin();
        }else if(ch==2){
            addAtMiddle();
        }else if(ch==3){
            addAtEnd();
        }else if(ch==4){
            traverse();
        }else if(ch==5){
            printf("\nExited");
        }else{
            printf("\nInvalid choice");
        }
    }while(ch!=5);
}
