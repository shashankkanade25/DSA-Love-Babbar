#include<iostream>
using namespace std;

int firstOccrance(int arr[],int size,int key){
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;

    while(start <=end){
        if(arr[mid]==key){
           ans = mid;
           end=mid-1;    //hme firstocc needed shift end
        }
     if(key>arr[mid]){   //go to right part of arr
           start= mid + 1; 
        }
        else{      // goto left of arr
            end= mid - 1;
        }
         mid = start + (end - start) / 2;

    }
    return ans;
}

int lastOccrance(int arr[],int size,int key){
    int start = 0;
    int end = size - 1;
    int mid=start  + (end-start)/2;
    int ans = -1;

    while(start <=end){
        if(arr[mid]==key){
           ans = mid;
           start=mid+1;    //hme firstocc needed shift end
        }
        else if(key>arr[mid]){   //go to right part of arr
           start= mid + 1; 
        }
        else if(key<arr[mid]){
             // goto left of arr
            end= mid - 1;
        }
        mid=start  + (end-start)/2;
    }
    return ans;
}
int main(){

    int odd[7]={0,0,9,6,4,3,9};         //sorted array cause BS
    int firstOcc=firstOccrance(odd,7,0);
    cout<<"The first occurance of 0 is at index:"<<firstOccrance(odd,7,0)<<endl;
    cout<<"The last occrance  of  0 is at index:"<<lastOccrance(odd,7,0)<<endl;
    return 0;

}