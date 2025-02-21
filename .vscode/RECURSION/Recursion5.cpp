#include<iostream>
#include<vector>
using namespace std;
bool isSorted(vector<int> arr,int n){
    if(n==0 || n==1){
        return true;
      }
    return arr[n-1] >= arr[n-2] && isSorted(arr,n-1);  
} // sorting done from back
int main(){
    vector<int> arr={1,3,5,7};

    cout<<isSorted(arr,arr.size());
    return 0;
}