#include<iostream>
using namespace std;

int subArraySum(int arr[],int n, int target){
  
   int left = 0 , sum = 0 ;
   bool found = false;
   for(int right = 0; right < n ; right++){
    sum += arr[right];
     
    while(sum > target &&  left <= right ){     //must have
        sum -= arr[left];
        left++;
    }
    if(sum == target ){
        cout<<"subArray of given sum from " <<left<<" to "<<right<<endl;
        found = true;
    }
   }
   if(!found){
   cout<<"No subArray having given sum"<<endl;
   }
}

int main(){
    int arr[]={1,2,3,4,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    int target = 5;

    subArraySum(arr,n,target);
return 0;
}