#include<iostream>
using namespace std;

bool isArmstrong(int n){
    int copy = n;
    int digit;
    int sumOfCubes = 0;

    while(n != 0){
        digit= n % 10;
        sumOfCubes += (digit * digit * digit);

        n = n / 10;
    }
    return sumOfCubes == copy;
}
int main(){

    int n;
    cout<<"Enter no:";
    cin>>n;

    if(isArmstrong(n)){
        cout<<"Armstrong number"<<endl;
    }
    else{
        cout<<"NOT Armstrong number"<<endl;
    }
    return 0;
}
