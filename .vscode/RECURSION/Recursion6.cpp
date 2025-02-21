#include<iostream>
#include<vector>
using namespace std;
int RecBS(vector<int> arr, int tar,int st,int end){

    if(st <= end){
        int mid = st + (end - st)/2;
        if (arr[mid] == tar){       //base case
            return mid;
        }
        else if (arr[mid]>=tar){
            return RecBS(arr,tar,st,mid-1);
        }else{
            return RecBS(arr,tar,mid+1,end);
        }        
    }
    return -1;
}

int main(){
    vector<int> arr={2,4,5,6,7,8,9,12,23,50};
    cout<<RecBS(arr,5,0,arr.size());

    return 0;
}