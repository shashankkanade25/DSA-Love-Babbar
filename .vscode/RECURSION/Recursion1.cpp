#include<iostream>
using namespace std;

void printNum(int n){
    if(n == 1){     //base case
        cout<<"1"<<endl;
        return;
    }

    cout<< n << " ";
    printNum(n-1);  //call itself
}


int main(){
    printNum(100);
    return 0;
}