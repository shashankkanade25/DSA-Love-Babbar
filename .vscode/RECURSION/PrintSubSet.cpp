#include<iostream>
#include<vector>
using namespace std;

void printSubs(vector<int> &arr , vector<int> &ans,int i){
    if(i == arr.size()){   //basecase
        for(int val : ans){
            cout<<val<<" ";
        }
        cout<<endl;
        return;
    }

    //inclusion
    ans.push_back(arr[i]);
    printSubs(arr,ans,i+1);

    //exclusion
    ans.pop_back();
    printSubs(arr,ans,i+1);

    return;
}

int main(){
    vector<int> arr={1,2,3,4,5,6};
    vector<int> ans;

    printSubs(arr,ans,0);
    return 0;
}