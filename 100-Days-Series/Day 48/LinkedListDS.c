#include<stdio.h>
#include<stdlib.h>
struct LinkedList{
    int data;
    struct LinkedList *next;   
}*head;
void addNode(){
    struct LinkedList *ptr;
    ptr=(struct LinkedList*)malloc(sizeof(struct LinkedList));
    if(ptr==NULL){
        printf("\nCouldn't allocated memory!");
    }else{
        printf("\nEnter data : ");
        scanf("%d",&ptr->data);
        if(head==NULL){
            head=ptr;
            head->next=NULL;
        }else{
            struct LinkedList *p,*last;
            for(p=head;p!=NULL;p=p->next){
                last=p;
            }
            last->next=ptr;
            ptr->next=NULL;
        }
        printf("\nNew Node Added");
    }
}
void traverse(){
    if(head==NULL){
        printf("\nNo Noded Found!");
    }else{
        struct LinkedList *temp;
        for(temp=head;(temp);temp=temp->next){
            printf("\nData is %d",temp->data);
            printf("\n---------------------------");
        }
    }
}
// Let' Start here
void main(){
    int ch;
    do{
        printf("\n1. Add New Node");
        printf("\n2. Traverse");
        printf("\n3. Exit");
        printf("\nSelect a choice : ");
        scanf("%d",&ch);
        if(ch==1){
            addNode();
        }else if(ch==2){
            traverse();
        }else if(ch==3){
            printf("\nExited");
        }else{
            printf("\nInvalid choice");
        }
    }while(ch!=3);
}