#include <iostream>
using namespace std;

int size(char *A){
    int i=0;
    while (A[i]!='\0')
    {
        i++;
    }
    return i;
}

void reverse1(char *A){
    char B[10];
    int n=size(A);
    int i=n-1, j;
    for(j=0; i<=0; i--, j++){
        B[j]=A[i];
    }
    B[j]='\0';
    cout<<B;
}

int main(){
    char A[]="akansha";
    reverse1(A);
    return 0;
}