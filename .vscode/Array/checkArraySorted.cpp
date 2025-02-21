#include<iostream>
using namespace std;

bool sorted(int arr[],int n){
    for(int i = 0; i < n - 1 ; i++ ){
        if(arr[i] > arr[i+1]){
            return false;
        }   
    }
    return true;
}
 
int main(){

    int arr[6]={2,6,8,10,30,50};
    int n = sizeof(arr) / sizeof(arr[0]);

    if(sorted(arr,n)){
        cout<<"array is sorted"<<endl;
    }else{
        cout<<"array is not sorted"<<endl;
    }
    
 
return 0;
}