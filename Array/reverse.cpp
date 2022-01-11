#include <iostream>
using namespace std;
void swap(int *a, int *b){
    int *temp;
    temp=a;
    a=b;
    b=a;
}

void reverse1(int *A, int n){
    int *B=new int(n);
    int i, j;
    for(i=n-1, j=0; i>=0; i--, j++){
        B[j]=A[i];
    }
    for(i=0; i<n; i++){
        A[i]=B[i];
    }
}

void reverse2(int *A, int n){
    int i, j;
    for(i=0, j=n-1; i<j; i++, j--){
        swap(A[i], A[j]);
    }
}

void display(int *A, int n){
    for (int  i = 0; i < n; i++){
        cout<<A[i];
        cout<<endl;
    }
    
}

int main(){
    int A[6]={0, 1, 2, 3, 4, 5};
    int n=sizeof(A)/sizeof(A[0]);
    display(A, n);
    cout<<"after reversing"<<endl;
    reverse2(A, n);
    display(A, n);

    
}