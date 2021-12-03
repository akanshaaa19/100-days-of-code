#include <iostream>
using namespace std;
// Fuction
int fun(int x){
    int sum=0;
    if(x>0){
        sum=x+fun(x-1);
    }
    return sum;
}

int main() {      //main function
    cout<<fun(6);
    return 0;
}
// O(n)