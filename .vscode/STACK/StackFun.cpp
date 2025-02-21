#include<iostream>
using namespace std;

#define n 100
class stack{
    int* arr;
    int top;

public:
    stack() {
        arr = new int[n];    //constructor
        top = -1;
    }       
     
    void push(int x){
        if (top == n-1){
            cout<< "stack Overflow"<< endl;
            return ;
        } 
    top++;
    arr[top]= x;
    }

    void pop(){ 
        if(top==-1){
            cout<<"stack Underflow"<<endl;
            return ;
        }
        top--;}

        int peek (){
            if(top==-1){
                cout<<"stack Underflow"<<endl;
                return -1;
            }

            return arr[top];
        }
        
        bool isEmpty(){
            return top == -1;
        }  
        
        bool isFull(){
            return top == n-1;
        }
    
    };

int main(){
    stack st;

    st.push(1);
    st.push(3);
    st.push(5);

    cout<<st.peek()<<endl; 
    st.pop();
    cout<<st.peek()<<endl; 
    st.pop();
    st.pop();
    st.pop();

    cout<<st.isEmpty()<<endl;
    return 0;
}