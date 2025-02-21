#include<iostream>
#include<set>
using namespace std;
//set also stores unique values prints only once
int main(){
    set<int>s;

    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(1);
    s.insert(1);

    cout<<s.size()<<endl;
    
      
    for(auto val: s){
        cout<<val<<endl;
    }
    cout<<"lower bound="<<*(s.lower_bound(0))<<endl;
    cout<<"upper bound="<<*(s.upper_bound(5))<<endl;
}