#include<iostream>
#include<stack>
#include<vector>
#include<list>
#include<deque>
#include<queue>
#include<map>
using namespace std;

int main(){
    map <string , int> m;
    m["tv"]=100;
    m["fridge"]=10;
    m["laptop"]=50;
    m["headphones"]=200;

    for(auto x : m){
        cout<<x.first<<"->"<<x.second<<endl;
    }
    cout <<endl;
    m.emplace("camera",80);

    for(auto x : m){
        cout<<x.first<<"->"<<x.second<<endl;
    }
    cout <<endl;

    m.insert({"oven",40});

    for(auto x : m){
        cout<<x.first<<"->"<<x.second<<endl;
    }
    cout <<endl;

    m.erase("tv");
    for(auto x : m){
        cout<<x.first<<"->"<<x.second<<endl;
    }
    cout<<m.size()<<endl;  //return size
    return 0;
}