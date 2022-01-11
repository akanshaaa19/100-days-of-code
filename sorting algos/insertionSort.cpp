#include <iostream>
using namespace std;

void printArray(int *a, int n){
    for(int i=0; i<n; i++){
        cout<<a[i]<<" "; 
    }
    cout<<endl;
}

int * insertionSort(int *a, int n){
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
    return a;
}

int main(){
    int array[]={94, 67, 8, 56, 9};
    int n=sizeof(array)/sizeof(int);
    printArray(array, n);
    int *sortedArray = insertionSort(array, n);
    printArray(sortedArray, n);
}