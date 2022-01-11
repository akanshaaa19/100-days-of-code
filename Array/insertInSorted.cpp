#include <iostream>
using namespace std;

void insert(int *A, int n, int key){
    int i=n-1;
    while(A[i]>key){
        A[i+1]=A[i];
        i--;
    }
    A[i+1]=key;
}

void display(int *A, int n){
    for (int  i = 0; i < n; i++){
        cout<<A[i];
        cout<<endl;
    }
}

bool checkIfSorted(int *A, int n){
    for(int i=1; i<n; i++){
        if(A[i]>A[i+1]){
            return false;
        }
    }
    return true;
}

int main(){
    int A[]={0, 1, 2, 4, 5};
    int n=sizeof(A)/sizeof(A[0]);
    display(A, n);
    cout<<"after reversing"<<endl;
    insert(A, n, 3);
    display(A, n+1);
    int B[]={1, 5, 10, 15, 40, 20, 70};
    int n1=sizeof(B)/sizeof(B[0]);
    
}