#include<iostream>
#include<stdlib.h>
using namespace std;
// Structure definition for a linked list node
struct LinkedList{
    int data;
    struct LinkedList *next;
}*start;
// Function to create a new node
struct LinkedList *createNode(){
    LinkedList *ptr=new LinkedList;
    if(ptr==NULL){
        return NULL;
    }else{
        cout<<"\nEnter Data : ";
        cin>>ptr->data;
        return ptr;
    }
}
// Function to add a node at the beginning of the linked list
void addAtBegin(){
    struct LinkedList *ptr;
    ptr=createNode();
    if(ptr==NULL){
        cout<<"\nMemory couldn't allocated";
    }else{
        ptr->next=start;
        start=ptr;
        cout<<"\nNew Node Added"<<endl;
    }
}
// Function to add a node in the middle of the linked list
void addAtMiddle(){
    if(start==NULL){
        cout<<"\nLinked List is empty"<<endl;
    }else{
        struct LinkedList *ptr,*temp;
        ptr=createNode();
        int no,res=0;
        cout<<"\nEnter data after which you want to insert the new node : ";
        cin>>no;
        for(temp=start;(temp);temp=temp->next){
            if(temp->data==no){
                ptr->next=temp->next;
                temp->next=ptr;
                cout<<"\nNew Node Added"<<endl;
                res=1;
                break;
            }
        }
        if(!res){
            cout<<"\nData is not found!!"<<endl;
        }
    }
}
// Function to add a node at the end of the linked list
void addAtEnd(){
    struct LinkedList *ptr;
    ptr=createNode();
    if(ptr==NULL){
        cout<<"\nMemory couldn't allocated"<<endl;
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
    cout<<"\nNew Node Added"<<endl;
}
// Function to traverse and display the linked list
void traverse(){
    if(start==NULL){
        cout<<"\nLinked List is empty!"<<endl;
    }else{
        struct LinkedList *temp;
        for(temp=start;(temp);temp=temp->next){
            cout<<"\nData is "<<temp->data;
            cout<<"\n-------------------";
        }
    }
}
// Let's Start here
int main(){
    int ch;
    start=NULL;
    do{
        cout<<"\n1. Add at the Beginning";
        cout<<"\n2. Add at the Middle";
        cout<<"\n3. Add at the End";
        cout<<"\n4. Traverse";
        cout<<"\n5. Exit";
        cout<<"\nSelect a choice : ";
        cin>>ch;
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
    return 0;
}
