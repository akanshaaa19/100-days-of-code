#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node * next; 
};

void push(Node **head, int val){           //double pointer is needed for inserting
    Node *new_node=new Node();

    new_node->data=val;
    new_node->next=*head;

    *head=new_node;
}

void display(Node *head){
    Node *a=head;
    while(a!=NULL){
        cout<<a->data<<" ";
        a=a->next;
    }
}



int main(){
    Node *head=new Node();

    head->data=9;
    head->next=NULL;
    push(&head, 23);
    push(&head, 30);
    push(&head, 26);
    push(&head, 19);

    display(head);
    
}