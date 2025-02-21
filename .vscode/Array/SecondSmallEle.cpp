#include<iostream>
using namespace std;

int main(){

    int arr[8]={3,6,1,9,23,45,15,8};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    int smallest = arr[0];
    int SecSmallest = -1;

    for (int i=1; i<n ; i++){
        if(arr[i] < smallest){
        SecSmallest = smallest;
        smallest = arr[i];
        }
}

    cout<<"Second Smallest Element is: "<<SecSmallest<<endl; 
return 0;
}