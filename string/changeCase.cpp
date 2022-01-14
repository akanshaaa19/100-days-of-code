// Program to change covert lowercase to uppercase, uppercase to lowercase and toggle.

#include <iostream>
using namespace std;

char * lowerToUpper(char *A){
    for(int i=0; A[i]!='\0'; i++){
        A[i]=A[i]-32;
    }
    return A;
}

char * upperToLower(char *A){
    for(int i=0; A[i]!='\0'; i++){
        A[i]=A[i]+32;
    }
    return A;
}

char * toggle(char *A){
    for(int i=0; A[i]!=0; i++){
        if(A[i]>=65 && A[i]<=90){
            A[i]=A[i]+32;
        }
        else if(A[i]>=97 && A[i]<=122){
            A[i]=A[i]-32;
        }
    }
    return A;
}

int main(){
    char name[]="akansha";
    cout<<"Before: "<<name<<endl;
    cout<<"After: ";
    cout<<lowerToUpper(name)<<endl;

    char name1[]="AKANSHA";
    cout<<"Before: "<<name1<<endl;
    cout<<"After: ";
    cout<<upperToLower(name1)<<endl;;

    char name2[]="aKaNsHa";
    cout<<"Before: "<<name2<<endl;
    cout<<"After: ";
    cout<<toggle(name2);
}