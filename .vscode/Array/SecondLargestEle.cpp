#include<iostream>
#include<algorithm>
using namespace std;
 
int main(){

    int arr[5]={2,7,1,4,11}; 
    int n = sizeof(arr) / sizeof(arr[0]);  //size of array 
    
    sort(arr, arr + n); //sort the array
    cout<<"Second largest element is:"<<arr[n-2]<<endl; //print second largest element

 
return 0;
}