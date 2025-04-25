#include<iostream>
#include<stdlib.h>
using namespace std;
struct LinkedList{
    int data;
    struct LinkedList *next;
};
struct LinkedList *head=nullptr;
void addNode(){
    LinkedList *ptr=new LinkedList;
    if(ptr==nullptr){
        cout<<"\nCouldn't allocated memory!";
    }else{
        cout<<"\nEnter data : ";
        cin>>ptr->data;
        if(head==nullptr){
            head=ptr;
            ptr->next=nullptr;
        }else{
            LinkedList *temp,*last;
            for(temp=head;temp!=nullptr;temp=temp->next){
                last=temp;
            }
            last->next=ptr;
            ptr->next=nullptr;
        }
        cout<<"\nNew Node Added";
    }
}       
void traverse(){
    if(head==nullptr){
        cout<<"\nNo Nodes Found";
    }else{
        LinkedList *temp;
        for(temp=head;temp!=nullptr;temp=temp->next){
            cout<<"\nData is "<<temp->data;
            cout<<"\n---------------------------";
        }
    }
}
// Let's Start here
int main(){
    int ch;
    do{
        cout<<"\n1. Add New Node";
        cout<<"\n2. Traverse";
        cout<<"\n3. Exit";
        cout<<"\nSelect a choice : ";
        cin>>ch;
        if(ch==1){
            addNode();
        }else if(ch==2){
            traverse();
        }else if(ch==3){
            cout<<"\nExited";
        }else{
            cout<<"\nInvalid choice";
        }
    }while(ch!=3);
}