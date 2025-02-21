#include <iostream>     //vector same as array but size exceed it doubles size ofnew vector
#include<vector>    //dynamic allocation
using namespace std;
int main(){

    vector<int> v;  //initial size of vector 0
    cout<<"capacity->"<<v.capacity()<<endl;
     
    v.push_back(1);
    cout<<"capacity->"<<v.capacity()<<endl;

    v.push_back(2);
    cout<<"capacity->"<<v.capacity()<<endl;

    v.push_back(3); //size double
    cout<<"capacity->"<<v.capacity()<<endl;
    cout<<"size->"<<v.size()<<endl;

    cout<<"Element at 1st index"<<v.at(1)<<endl;

    cout<<"first element->"<<v.front()<<endl;
    cout<<"Last element ->"<<v.back()<<endl;

    // cout<<"before clear size:"<<v.size()<<endl;
    // v.clear();  //clear the vector
    // cout<<"after clear size:>"<<v.size()<<endl;

    vector <int> vtr = { 1,2,3,4,5,6};
    vector <int> :: iterator it;              
   
    for(it = vtr.begin(); it != vtr.end(); it++){       // forward loop 
        cout<<*(it) << " ";
    }
    cout<<endl;

    for(auto it = vtr.rbegin(); it != vtr.rend(); it++){    //backward loop
        cout << *(it) << " ";
    }




}