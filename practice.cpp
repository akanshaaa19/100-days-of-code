#include <iostream>
using namespace std;

void swap(int *p, int *q){
    int *temp= p;
    p=q;
    q=temp;
}

void printArray(int *a, int n){
    for(int i=0; i<n; i++){
        cout<<a[i]<<" "; 
    }
    cout<<endl;
}

void insertionSort(int *a, int n){
    int i;
    for(i=1; i<n; i++){
        int key=a[i];
        int j=i-1;
        while(j>=0 && a[j]>key){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=key;
        }
}

void bubbleSort(int *A, int n){
    int i, j;
    for(i=0; i<n-1; i++){
        for(j=0; j<n-1-i; j++){
            if(A[j]>A[j+1]){
                swap(A[j], A[j+1]);
            }
        }
    }
}

void quickSort(int *A, int n){
    int i, j, k;
}

void selectionSort(int *A, int n){
    int i, j, min;
    for(i=0; i<n-1; i++){
        min=i;
        for(j=i+1; j<n; j++){
            if(A[j] < A[min]){
                min=j;
            }
        }
        swap(A[min], A[i]);
    }
}

bool linearSearch(int *a, int n, int key){
    int i;
    for(i=0; i<n; i++){
        if(a[i]==key){
            return true;
        }
    }
    return false;
}

bool binarySearch(int *a, int n, int key){
    int high, low, guess, mid;
    low=0;
    high=n-1;
    while(low<=high){
        mid= (high+low)/2;
        guess=a[mid];
        if(key==guess){
            return true;
        }
        if(key>guess){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return false;
}

int main(){
    int a[]={9,4,8,2,1,0};
    int n=sizeof(a)/sizeof(int);
    printArray(a, n);
    bubbleSort(a,n);
    printArray(a, n);
    cout<<binarySearch(a,n,3 );    
}
