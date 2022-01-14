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

    // Recursive Function

    // if(head!=NULL){
    //     cout<<head->data;                      
    //     cout<<" ";
    //     display(head->next);
    // }

}

void push(Node **head, int val){           //double pointer is needed for inserting
    Node *new_node=new Node();

    new_node->data=val;
    new_node->next=*head;

    *head=new_node;
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

int main(){
    Node *head=new Node();
    Node *p=new Node();
    Node *q=new Node();
    Node *r=new Node();

    head->data=0;
    head->next=NULL;
    
    append(&head, 1);    
    append(&head, 2);    
    append(&head, 3);    
    append(&head, 4);       // & used for insertion
    
    append(&head, 89);

    display(head);

    return 0;
}