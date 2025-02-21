#include<iostream>
using namespace std;
int fib(int n){       //fibonacci
    if(n == 0 || n == 1){   //base case
        return n;
    }
    return fib(n-1) + fib(n-2);
}
int main(){
    cout<<fib(7);
    return 0;
}