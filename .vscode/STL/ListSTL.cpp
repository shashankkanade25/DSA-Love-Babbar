#include<iostream>
#include<list>
using namespace std;

int main(){

    list <int> l = {1,2,4,5};
    l.push_back(8);
    l.push_front(0);
    l.push_back(10);

    for( int val : l ){
        cout<< val << " ";
    }
    cout << endl;

    l.pop_back(); //10
    l.pop_front(); //0
     
    for(int val : l){
        cout<< val << " " ;
       }

   
}