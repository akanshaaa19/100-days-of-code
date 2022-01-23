#include <iostream>
using namespace std;
#include <vector>

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

int count(Node *head){
    Node * temp=head;
    int count=0;
    while(temp!=NULL){
        count++;
        temp=temp->next;
    }
    return count;
}

vector<int> reverse(Node *p){
    int n=count(p);
    int i=0;
    vector<int> A;
    while (p!=NULL)
    {
        A[i]=p->data;
        cout<<A[i];
        i++;
        p=p->next;
    }
    return A;
}

int main(){
    Node *head=new Node();
    head->data=0;
    head->next=NULL;
    insert(&head, 1, 1);
    insert(&head, 2, 2);
    insert(&head, 3, 3);
    insert(&head, 4, 4);
    display(head);
    cout<<endl;
    vector<int> a=reverse(head);
    //for(int i=0; i<a.size(); i++){
    //    cout<<a[i]<<" ";
    //}
    return 0;
}