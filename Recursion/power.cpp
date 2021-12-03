#include <iostream>
using namespace std;

int power(int n, int pow){
    if(pow==0){
        return 1;
    }
    else{
        return power(n, pow-1)*n;
    }
}

int main(){
    cout<<power(2, 6);
    return 0;
}