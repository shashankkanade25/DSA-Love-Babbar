#include<iostream>
using namespace std;

int binarySearch(int arr[],int low,int high, int x){
    while(low<=high){
        int mid = (low + high) / 2 ;
        
        if (arr[mid] == x){
            return  mid;
        }
        if( arr[mid] < x ){
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }

        }
        return -1;
        }
        
        int main(){

            int arr[]={2,4,5,6,7,8,9,0};
            int x;
            cout<<"Enter the seaching no."<<endl;
            cin>> x;
            int n = sizeof(arr) / sizeof(arr[0]) ;

            int result = binarySearch(arr,0,n-1,x);
            (result ==  -1 ) ? cout <<"Element not found " : cout <<"Element found at index " <<result << endl;

            return 0;
        }