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

void merge(Node *first, Node *second, Node *third){
    Node *last=NULL;  // ok
    if(first->data < second->data){
        third=last=first;
        first=first->next;
        third->next=NULL;
    }
    else{
        third=last=second;
        second=second->next;
        third->next=NULL;
    }
    while(first && second){
        if(first->data < second->data){
            last->next=first;
            last=first;
            first=first->next;
            last->next=NULL;
        }else{
            last->next=second;
            last=second;
            second=second->next;
            last->next=NULL;
        }
    }
    if(first){
        last->next=first;
    }
    if(second){
        last->next=second;
    }
}

int main(){
    Node *third=NULL;
    Node *head=new Node();
    head->data=0;
    head->next=NULL;

    insert(&head, 1, 2);
    insert(&head, 2, 4);
    insert(&head, 3, 6);
    insert(&head, 4, 8);

    Node *head2=new Node();
    head2->data=1;
    head2->next=NULL;
    insert(&head2, 1, 3);
    insert(&head2, 2, 5);
    insert(&head2, 3, 7);
    insert(&head2, 4, 9);
    display(head);
    cout<<endl;
    display(head2);
    cout<<endl;

    merge(head, head2, third);
    display(third);

    return 0;
}