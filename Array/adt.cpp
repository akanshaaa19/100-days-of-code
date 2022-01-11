#include <iostream>
#include <stdlib.h>
using namespace std;

void insert(int *A, int n, int index, int key){
    for(int i=n; i>index; i--){
        A[i]=A[i-1];
    }
    A[index]=key;
    n++;
}

void append(int *A, int n, int key){
    A[n]=key;
    n++;
}
void display(int *A, int n){
    //int n= sizeof(A)/sizeof(A[0]);
    for (int  i = 0; i < n; i++)
    {
        cout<<A[i];
        cout<<endl;
    }
    
}
void del(int *A, int n, int index){
    for(int i=index; i<n; i++){
        A[i]=A[i+1];
    }
    n--;
}
int linearSearch(int *A, int n, int key){    // done  
    for(int i=0; i<n; i++){                  // O(n)
        if(key==i){
            return i;
        }
    }
    return -1;
}

int binarySearch(int *A, int n, int key){
    int high, low, mid;
    low=0;
    high=n-1;
    while(low<=high){
        mid=(high+low)/2;
        int guess= A[mid];
        if(guess==key){
            return mid;
        }
        if(key>guess){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return -1;
}
int max(int *A, int n){
    int max=A[0];
    for(int i=1; i<n; i++){
        if(max<A[i]){
            max=A[i];
        }
    }
    return max;
}
int avg(int *A, int n){
    int sum=0; 
    for(int i=0; i<n; i++){
        sum=sum+A[i];
    }
    return sum/n;
}

int main(){
    int A[]={0, 1, 2, 3, 4};
        //   0   1  2   3  4   5   6   7   8
        //0, 1, 2, 3, 4, 56, 89, 90, 102  
    int n= sizeof(A)/sizeof(A[0]);
    //display(A, n);
    //del(A, n, 3);
    //cout<<"here"<<endl;
    //display(A, n);
    cout<<avg(A, n);
}