#include<iostream>
#include<stack>
#include<vector>
#include<list>
#include<deque>
#include<queue>
using namespace std;

//priority_queue push elements by priority by largest on top

int main(){
    priority_queue<int> q;

    q.push(10);
    q.push(2);
    q.push(15);

    while(!q.empty()){
        cout<<q.top()<<" "<<endl;
        q.pop();
    }
    cout<<endl;

    priority_queue<int, vector<int> , greater<int>> p;
    
    p.push(10);
    p.push(20);
    p.push(5);

    while(!p.empty()) {
        cout<<p.top()<<" "<<endl;
        p.pop();
    }
    return 0;
}