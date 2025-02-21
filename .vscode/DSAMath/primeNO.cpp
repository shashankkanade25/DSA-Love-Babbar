#include<iostream>
using namespace std;

string isPrime(int n){
    for(int i=2; i*i<=n; i++){
        if(n%i == 0){
            return "Non Prime";
        }
    }    
    return "prime";
    
}


void printDigits(int n){
    int sum = 0;
    while(n!=0){
        int digit = n % 10;
        sum+= digit;
        cout<<digit<<" ";

        n = n / 10;
    }
    cout<<endl;
    cout<<"sum of digit:"<<sum;
}
int main(){
    int n;
    cout<<"Enter No:";  //no frm user
    cin>>n;
    cout<<isPrime(n)<<endl; //fun.call to check
    printDigits(n);
    return 0;

}