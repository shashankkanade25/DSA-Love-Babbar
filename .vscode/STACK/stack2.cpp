#include<iostream>
using namespace std;
class stack{
    public:
    int *arr;
    int top;
    int capacity;

    stack(int size){    //constr   initia.
        capacity=size;
        arr = new int[size];
        top = -1;
    }

    void push(int val){
        if(top==capacity-1){
            cout<<"stack overflow"<<endl;
            return ;
        }
        
        top++;
        arr[top]=val;

    }
    int pop(){
        if(isEmpty()){
            cout<<"stack underflow"<<endl;
            return -1;
        }
        return arr[top--];
    }
    int peek() {
        if (isEmpty()) {
            cout << "Stack is empty!" << endl;
            return -1;
        }
        return arr[top];
    }
    bool isEmpty() {
        return top == -1;
    }

    int size() {
        return top + 1;
    }
};
int main(){
    stack s(5); // Create a stack with a capacity of 5

    // Perform stack operations
    s.push(10);
    s.push(20);
    s.push(30);
    cout<<"top:"<<s.peek()<<endl;
    cout<<"stack size:"<<s.size()<<endl;

    s.pop();
    s.pop();
    s.pop();
    cout<<"top:"<<s.peek()<<endl;
    return 0;

}