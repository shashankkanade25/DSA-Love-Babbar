#include<iostream>
using namespace std;

int gcd(int a,int b){  //optimise euclid algo
    while( a>0 && b>0 ){
        if(a>b){
            a = a % b;
        }else{
            b = b % a;
        }
    }
    if( a== 0) return b;
    if( b== 0) return a;
}

int lcm(int a , int b){
    int Mul = a*b;
    int gcdVal = gcd(a,b);
    return Mul/ gcdVal;

}
int main(){
    int a,b;
    cout<<"Enter a:";;
    cin>>a;
    cout<<"Enter b:";;
    cin>>b;

    cout<<"GCD is: "<<gcd(a,b)<<endl;
    cout<<"LCM is: "<<lcm(a,b)<<endl;
    return 0 ;
}