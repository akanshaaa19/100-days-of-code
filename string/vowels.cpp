#include <iostream>
using namespace std;

char * toUpper(char *A){
    for(int i=0; A[i]!=0; i++){
        A[i]=A[i]-32;
    }
    return A;
}
char * toLower(char *A){
    for(int i=0; A[i]!=0; i++){
        A[i]=A[i]+32;
    }
    return A;
}

void count(char *A){
    toUpper(A);
    int vcount=0, ccount=0;
    for(int i=0; A[i]!='\0'; i++){
        if(A[i]=='A' || A[i]=='E' || A[i]=='I' || A[i]=='O' || A[i]=='U'){
            vcount++;
        }
        else if(A[i]>=65 && A[i]<=90){
            ccount++;
        }
    }
    toLower(A);
    cout<<"There are "<<vcount<<" vowels and "<<ccount<<" consonants in "<<A;
}

int main(){
    char name[]="akansha";
    count(name);
}