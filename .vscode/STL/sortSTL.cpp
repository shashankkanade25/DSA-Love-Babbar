#include<iostream>
#include<stack>
#include<list>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int arr[7]={2,4,6,8,1,3,0};
 
    sort(arr,arr+7);
    for(int x : arr){
        cout<<x<<" ";
    }cout<<endl;

    reverse(arr,arr+7);
     for(int x : arr){
        cout<<x<<" ";
    }
    cout<<endl;
    vector<int> vec ={4,2,8,6,9,0};
    cout<<*(min_element(vec.begin(),vec.end()))<<endl;
    cout<<*(max_element(vec.begin(),vec.end()))<<endl;

    sort(vec.begin(),vec.end(),greater<int>());

    for(int x : vec){
        cout<<x<<" ";
    }
    cout<<endl;

    int array[8]={2,4,6,5,8,1,3,0};
    // to sort in descending order 
    sort(array, array+8, greater<int>());
    for(int x : array){
        cout<<x<<" ";
    }

    }