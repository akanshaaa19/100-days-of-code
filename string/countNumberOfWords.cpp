#include <iostream>
using namespace std;

int count(char *A){
    int flag=0;      
    for(int i=0; A[i]!='\0'; i++){
        if(A[i]==' ' && A[i-1]!=' '){
            flag++;      // flags are number of spaces
        }
    }
    return flag+1;       // there will be spaces + 1 words in total  
}

int main(){
    char string[]="This is a      program to count how many words are present in a string";
    cout<<"There are "<<count(string)<<" words in the string '"<<string<<"'.";
}