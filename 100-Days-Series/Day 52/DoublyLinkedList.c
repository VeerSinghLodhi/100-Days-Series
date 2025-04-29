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
        struct DoublyLL *temp=start;
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
            temp=temp->prev;
        }while(temp!=end);
    }
}
// Function for delete a node
void delNode(){
    if(start==NULL){
        printf("\nDoubly Linked List is empty!");
    }else{
        int no,res=0;
        struct DoublyLL *temp=start;
        printf("\nEnter data to delete : ");
        scanf("%d",&no);
        do{
            if(temp->data==no){
                if(temp==start){
                    if(temp->next==start){
                        start=end=NULL;
                    }else{
                        start=start->next;
                        end->next=start;
                    }
                }else if(temp==end){
                    end=end->prev;
                    end->next=start;
                    start->prev=end;
                }else{
                    temp->next->prev=temp->prev;
                    temp->prev->next=temp->next;
                }
                printf("\nDeleted!");
                res=1;
                free(temp);
                break;
            }
            temp=temp->next;
        }while(temp!=start);
        if(res==0){
            printf("\nData is not found!");
        }
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
        printf("\n4. Delete");
        printf("\n5. Exit");
        printf("\nSelect a choice : ");
        scanf("%d",&ch);
        if(ch==1){
            addNode();
        }else if(ch==2){
            traverseHeadToEnd();
        }else if(ch==3){
            traverseEndToHead();
        }else if(ch==4){
            delNode();
        }else if(ch==5){
            printf("\nExited");
        }else{
            printf("\nInvalid choice");
        }
    }while(ch!=5);
}