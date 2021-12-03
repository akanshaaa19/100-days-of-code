#include <iostream>
#include <stdlib.h>
using namespace std;

class Arr{
    public:
    int *A;
    int size;
    int length;
    Arr(int n){
        size=n;
        A= new int[size];
    }
    int getLength(){
        return sizeof(A)/sizeof(int);
    }
    void display(){
        int i;
        length=getLength();
        for(i=0; i<length; i++){
            cout<<A[i]<<endl;
        }
    }
    void append(int x){
        length=getLength();
        if(length==size){
            cout<<"ERROR: array already full"<<endl;
        }
        else{
            A[length]=x;
        }
    
};
    void insert(int x, int index);
    void deletionByIndex(int index);
    void deletionByValue(int x);
    bool search(int x);
    int * reverse();
    int max();
    int min();
    int getIndex();
};

int main(){
    int n;
    cout<<"Enter array size";
    cin>>n;
    Arr arr(n);
    arr.A[0]=1;
    arr.A[1]=2;
}