#include <iostream>// deque is insertion n deln at both the ends in arr
#include<deque>
using namespace std;
int main(){
    deque<int> d;

    d.push_back(4);
    d.push_front(3);
 
    cout<<"Front element:"<<d.front()<<endl;
    cout<<"Back element:"<<d.back()<<endl;


}
