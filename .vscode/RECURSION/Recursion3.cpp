#include<iostream>
using namespace std;
// code for sum of n numbers
int sum(int n){
    if(n==1){
    return 1;
    }
    return n + sum(n-1);
}

int main(){
    
    cout<<sum(6);
    
    return 0;
}