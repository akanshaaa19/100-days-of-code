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

void removeDuplicates(Node **head){
    Node *p=*head;
    Node*q=p->next;
    while(p!=NULL){
        if(p->data!=q->data){
            p=p->next;
            q=q->next;
        }
        else{
            p->next=q->next;
            delete(q);
            q=p->next;
        }
    }
}

int main(){
    Node *head=new Node();
    head->data=0;
    head->next=NULL;
    insert(&head, 1, 1);
    insert(&head, 2, 2);
    insert(&head, 3, 4);
    insert(&head, 4, 4);
    display(head);
    cout<<endl<<"woosh"<<endl;;
    //removeDuplicates(&head);
    display(head);
    return 0;
}