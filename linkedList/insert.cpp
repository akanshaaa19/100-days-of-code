#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node * next; 
};

void display(Node *head){
    Node *a=head;
    while(a!=NULL){
        cout<<a->data<<" ";
        a=a->next;
    }
}

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

void insert(Node **head, int pos, int val){
    int i;
    if(pos==0){
        Node *new_node=new Node();
        new_node->data=val;
        new_node->next=*head;
        *head=new_node;
    }
    else if(pos>0){
        Node *p=*head;
        for(i=0; i<pos-1 && p; i++){
        p=p->next;
        }
    if(p){
        Node *new_node=new Node();
        new_node->data=val;
        new_node->next=p->next;
        p->next=new_node;
    }
    }   
}

int main(){
    Node *head=new Node();
    head->data=1;
    head->next=NULL;
    insert(&head, 0, 0);
    insert(&head, 2, 2);
    display(head);
    
}