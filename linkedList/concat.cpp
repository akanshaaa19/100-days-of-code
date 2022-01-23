#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
};

void display(Node *head){
    Node *a=head;
    while(a!=NULL){
        cout<<a->data<<' ';
        a=a->next;
    }
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

void concat(Node *first, Node *second){
    Node *p=first;
    Node *q=second;
    while(p->next!=NULL){
        p=p->next;
    }
    p->next=q;
}

int main(){
    Node *head=new Node();
    head->data=0;
    head->next=NULL;
    insert(&head, 1, 1);
    insert(&head, 2, 2);
    insert(&head, 3, 3);
    insert(&head, 4, 4);

    Node *head2=new Node();
    head2->data=5;
    head2->next=NULL;
    insert(&head2, 1, 6);
    insert(&head2, 2, 7);
    insert(&head2, 3, 8);
    insert(&head2, 4, 9);
    display(head);
    cout<<endl;
    display(head2);
    cout<<endl;

    concat(head, head2);
    display(head);

    return 0;
}