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

int main(){
    char name[]="akansha";
    cout<<size(name);

}