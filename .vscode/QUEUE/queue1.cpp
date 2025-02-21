#include<iostream>
using namespace std;

class queue{
    int *arr;
    int frontidx;
    int rear;
    int size;

public:
     queue(){
         size = 1;
         arr = new int[size];
        
         frontidx = 0;
         rear = 0;
    }

    bool isEmpty(){
        return frontidx==rear;
    }
    bool isFull(){
        return rear==size;
    }

    void enqueue(int data){
        if(isFull()){
            cout<<"queue is full"<<endl;
        }
        else{
            arr[rear]=data;
            rear++;
        }
    }   
    void dequeue(){
        if(isEmpty()){
            cout<<"queue is empty"<<endl;
        }
        else{
            arr[frontidx]=-1;
            frontidx++;
            if(frontidx==rear){
                frontidx=0;
                rear=0;
            }
        }
    } 

    int front(){
        if(isEmpty()){
            return -1;
        }
        else{
            return arr[frontidx];
        }
    }
};
int main(){
  
  queue q;

  q.enqueue(10);
  q.enqueue(20);
  cout<<"Front element"<<q.front()<<endl;

  q.dequeue();
  cout<<"Front element"<<q.front()<<endl;

  q.dequeue();
  cout<<"is queue Empty? "<<(q.isEmpty() ? "Yes" : "No" )<<endl;
  cout<<"is queue Full? "<<(q.isFull() ? "Yes" : "No")<<endl;
return 0;
}