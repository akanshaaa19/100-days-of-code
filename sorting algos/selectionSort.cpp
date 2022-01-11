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

void selectionSort(int *a, int n){
    int i,j,min;
    for(i=0; i<n-1; i++){
        min=i;
        for(j=i+1; j<n; j++){
            if(a[j] < a[min]){
                min=j;
            }
        }
        swap(a[i], a[min]);
    }
}

/* 
    0 1 2 3 4
    5 8 7 9 3

    i=0, min=0
        j=1
        if a[j]< a[min] --> 8<5 false
        j=2
        if a[j]< a[min] --> 7<5 false
        j=3
        if a[j]< a[min] --> 9<5 false
        j=4
        if a[j]< a[min] --> 3<5 true --> min=4
        swap bw 4th and 0th index that is i and min
    => 0 1 2 3 4
       3 8 7 9 5

    i=1, min=1
    j=2
    if a[j]< a[min] --> 7<8 true -->min=2
    j=3
    if a[j]< a[min] --> 9<7 false
    j=4
    if a[j]< a[min] --> 5<7 true --> min=4
    swap between min and i
    => 0 1 2 3 4
       3 5 7 9 8
*/

int main(){
    int A[]={5, 8, 7, 9, 3, 0};
    int n=sizeof(A)/sizeof(int);
    printArray(A, n);
    selectionSort(A, n);
    printArray(A, n);
}