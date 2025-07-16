//Sum of array by adding elements

#include<iostream>
using namespace std;

int SumArray(int arr[],int n){

    int sum = 0;
    for(int i = 0 ; i<n ; i++){
        sum += arr[i];
        cout<<"Sum after adding "<< arr[i] << " is " << sum <<endl;
    }
}
 
int main(){
    int arr[]={5,3,2,7};
    int n = sizeof(arr) / sizeof(arr[0]);

    SumArray(arr,n);
   
return 0;
}
