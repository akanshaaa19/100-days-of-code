#include <iostream>
using namespace std;

void printArray(int *a, int n){
    for(int i=0; i<n; i++){
        cout<<a[i]<<" "; 
    }
    cout<<endl;
}

void swap(int *a, int *b){
    int *temp;
    temp=a;
    a=b;
    b=temp;
}

void bubbleSort(int *a, int n){
    int i, j;
    for(i=0; i<n-1; i++){
        for(j=0; j<n-1-i; j++){
            if(a[j]>a[j+1]){
                swap(a[j], a[j+1]);
            }
        }
    }
}

int main(){
    int A[]={2,9,1,4,7,3,5,8, 6};
    int n=sizeof(A)/sizeof(int);
    printArray(A, n);
    bubbleSort(A, n);
    printArray(A, n);
}