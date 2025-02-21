#include<iostream>
using namespace std;
 
class Deque{
    int *arr;
    int size;
    int front;
    int rear;

    public:
    Deque(int val){
        size=10;
        arr=new int [size];

        front = -1;
        rear = -1;
    }
    bool isFull(){
        return (front == 0 && rear==size-1 )|| (rear==(front-1)%(size-1));
    }
    bool isEmpty(){
        return front == -1;
    }

    void push_front(int val){
        if (isFull()){
            cout<<"Queue is Full"<<endl;
        }
        else if (front==-1){ //first val
            front = rear = -1;
        }
        else if(front==0){//cyclic nature
            front = size-1;
        }
        else {//normal flow
            front--;
        }
        arr[front]=val;
        cout<<"Inserted: "<<val<<endl;
        
    }

    void push_back(int data)
    {
        if (isFull())
        {
            cout << "queue is Full" << endl;
        }
        else
        {
            if (isEmpty())
            { // for queue is ini. empty
                front = 0;
            }
            rear = (rear + 1) % size;
            arr[rear] = data;
            cout << "inserted: " << data << endl;
        }
    }

    void pop_front()
    {
        if (isEmpty())
        {
            cout << "Queue is empty" << endl;
        }
        else
        {
            cout << "Removed: " << arr[front] << endl;
            // If the queue will become empty after this operation
            if (front == rear) // single ele.
            {
                front = rear = -1;
            }
            else
            {
                // Move front to the next position circularly
                front = (front + 1) % size;
            }
        }
    }

    void pop_back(){
        if(isEmpty()){
            cout<<"queue is empty"<<endl;
        }else if(front = rear = -1){

        }
    }

};
int main(){
    int size;
    Deque q(size);

    q.push_front(10);
    q.push_back(20);
    q.push_back(30);

 
return 0;
}