#include <iostream>
#include<array> //template for array
using namespace std;

int main(){
    int basic[3]={3,4,9};
    for(int i=0;i<3;i++){
         cout<<basic[i];
    }
    cout<<endl;
   
    array<int,4> pro={2,4,6,8};     // temp declare
    int size=pro.size();    //arry<type,size>=name.size();
    for(int i=0;i<size;i++){
        cout<<pro[i];   //call
    }
    cout<<"Element at 2nd index->"<<pro.at(2)<<endl;
  //particular element call name.at(indexNo)

    cout<<"Empty or Not->"<<pro.empty()<<endl;   //return bool
    cout<<"first element->"<<pro.front()<<endl;
    cout<<"Last element ->"<<pro.back()<<endl;

}