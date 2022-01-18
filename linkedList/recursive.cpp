#include <iostream>
using namespace std;

class Node{
    public:
      int data;
      Node *next;
};

void append(Node **head, int val){
    Node *newNode=new Node();
    newNode->data=val;
    
    Node* temp=*head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=newNode;
    newNode->next=NULL;
}

void display(Node *head){
    Node *a=head;
    while(a!=NULL){
        cout<<a->data<<" ";
        a=a->next;
    }
}

int sum(Node *p){
    if(p!=NULL){
        return sum(p->next)+p->data;
    }
    else{
        return 0;
    }
}

int count(Node *p){
    if(p!=NULL){
        return count(p->next)+1;
    }
    else{
        return 0;
    }
}

int main(){

    Node *head=new Node();
    head->data=0;
    head->next=NULL;

    append(&head, 1);    
    append(&head, 2);    
    append(&head, 3);    
    append(&head, 4);       // & used for insertion
    append(&head, 5);

    display(head);

    cout<<endl;

    cout<<"sum: "<<sum(head)<<endl;
    cout<<"count: "<<count(head)<<endl;

    cout<<sizeof(Node);

    return 0;
}