#include<iostream>
#include<stack>
using namespace std;
//reverse a string using stack

int main(){
    string str;
    cout<<"enter a string to reverse:";
    getline(cin,str);

    //push all char to stack from string
    stack<char> s;
    for(char ch:str){
        s.push(ch);
    }

    //pop char from stack
    string reverse="";
    while(!s.empty()){
        reverse += s.top();
        s.pop();  //poped,we get new elements at top 
    }

    cout<<"Reversed string:"<<reverse<<endl;

 
return 0;
}