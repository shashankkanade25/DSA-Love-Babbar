#include<iostream>
#include<math.h>
using namespace std;
int main(){

    int n,ans = 0;
    cout<<"enter number:";
    cin>>n;
     
    while (n!=0)
    {
       int digit = n % 10;
       ans = (ans * 10 )+ digit;
       n = n/10; 
       
    }
    cout<<"Reversed no. is: "<<ans;
    return 0;

   
}