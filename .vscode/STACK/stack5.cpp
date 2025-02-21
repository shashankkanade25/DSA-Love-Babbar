#include<iostream>
#include<stack>
using namespace std;
//delete middle element from stack
 
void solve(stack<int>&inputstack,int count ,int size){
    if(count==size/2){
        inputstack.pop();   //middle deleted
        return;
    }

    int removed=inputstack.top();   //top saved in it
    inputstack.pop();   //top poped

    //recursive call
    solve(inputstack,count+1,size);

    inputstack.push(removed);   //push the removed element

}
void deletemiddle(stack<int>&inputstack,int n){
    int count = 0;
    solve(inputstack,count,n);

    cout<<"Stack after deleting middle:"<<endl;
    while(!inputstack.empty()){
        cout<<inputstack.top()<<endl;
        inputstack.pop();
 }
 }
int main(){
 stack<int>s;
 s.push(10);
 s.push(20);
 s.push(30);
 s.push(40);
 s.push(50);
 s.push(60);

deletemiddle(s,s.size());

return 0;
}