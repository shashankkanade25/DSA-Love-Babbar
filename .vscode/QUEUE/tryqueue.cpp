#include<iostream>
using namespace std;

class queue{
  int *arr;
  int size;
  int front;
  int rear;

  public:
  queue(){
    size=10;
    arr = new int [size];

    front = 0;
    rear = 0;

  } 

  bool isFull(){
    return rear == size;
  }
  bool isEmpty(){
    return front == rear;
  }
  void push(int x){
    if(isFull()){
        cout<<"Queue is Full"<<endl;
    }
    else{
        cout<<"Inserted :"<<x;
        arr[rear]=x;
        cout<<endl;
    }
  } 

int getfront(){
        if(isEmpty()){
            return -1;
        }
        else{
            return arr[front];
        }
    }

void pop(){
    if(isEmpty()){
        cout<<"Queue is Empty"<<endl;
    }
    else{
        
        arr[front]=-1;
        cout<<"poped :"<<arr[front]<<endl;
        front++;
    }
}
};
 
int main(){
    queue q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);

    q.pop();

    cout<<"Front :" <<q.getfront();
 
return 0;
}