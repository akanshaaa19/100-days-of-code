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

int count(Node *head){
    Node * temp=head;
    int count=0;
    while(temp!=NULL){
        count++;
        temp=temp->next;
    }
    return count;
}

int sum(Node*head){
    Node *temp=head;
    int sum=0;
    while(temp!=NULL){
        sum=sum+temp->data;
        temp=temp->next;
    }
    return sum;
}

int max(Node *p){
    int max=p->data;
    while(p!=NULL){
        if(max<p->data){
            max=p->data;
        }
        p=p->next;
    }
    return max;
}

int min(Node *p){
    int min=p->data;
    while(p!=NULL){
        if(min>p->data){
            min=p->data;
        }
        p=p->next;
    }
    return min;
}

int search(Node *head, int key){
    int count=-1;
    while(head!=NULL){
        count++;
        if(head->data==key){
            return count;
        }
        head=head->next;
    }
    return -1;
}

void deleteNode(Node **head, int key){
    Node *temp=*head;
    while(temp!=NULL){
        if(temp->data==key){
            delete(temp);
            temp=temp->next;
        }
        temp=temp->next;
    }
}

void insertAtPos(Node *p, int pos, int val){
    Node *new_node=new Node();
    new_node->data=val;
    int i;
    for(i=0; i<pos-1; i++){
        p=p->next;
    }
    new_node->next=p->next;
    p->next=new_node;
}

int main(){
    Node *head=new Node();

    head->data=1;
    head->next=NULL;
    
    append(&head, 2);    
    append(&head, 3);    
    append(&head, 4);       // & used for insertion
    append(&head, 5);

    push(&head, 0);

    display(head);

    cout<<endl;
    cout<<"size: "<<count(head);

    cout<<endl;
    cout<<"sum: "<<sum(head);

    cout<<endl;
    cout<<"max: "<<max(head);

    cout<<endl;
    cout<<"min: "<<min(head);

    cout<<endl;
    cout<<search(head, 80);

    insertAtPos(head, 4, 78);
    cout<<endl;
    display(head);

    return 0;
}