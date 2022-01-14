#include <iostream>
using namespace std;

bool validate(char *A){
    for(int i=0; A[i]!='\0'; i++){
        if(
        !(A[i]>=65 && A[i]<=90) && 
        !(A[i]>=97 && A[i]<=122) && 
        !(A[i]>=48 && A[i]<=57))
        {
            return 0;
        }
    }
    return 1;
}

int main(){
    char name[]="Akansha";    //program will check if the string has special characters or not
    if(validate(name)){
        cout<<"correct format";
    }
    else{
        cout<<"wrong format";
    }

    return 0;
}