#include <iostream>
using namespace std;



void display(int *A, int n){
    for (int  i = 0; i < n; i++){
        cout<<A[i];
        cout<<endl;
    }
    
}

int main(){
    int A[6]={0, 1, 2, 3, 4, 5};
    int n=sizeof(A)/sizeof(A[0]);
    
}



