#include <iostream>
using namespace std;

class circularQueue
{
    int *arr;
    int front;
    int rear;
    int size;

public:
    circularQueue(int s)
    {
        size = s;
        arr = new int[size];

        front = -1;
        rear = -1;
    }
    bool isEmpty()
    {
        return front == -1;
    }
    bool isFull()
    {
        return (front == 0 && rear == size - 1 || rear == (front - 1) % (size));
    }
    void enqueue(int data)
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
    void dequeue()
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

    int getFront()
    {
        if (isEmpty())
        {
            cout << "Queue is empty" << endl;
            return -1;
        }
    return arr[front];
    }

    int getRear()
    {
        if (isEmpty())
        {
            cout << "Queue is empty" << endl;
            return -1;
        }
    return arr[rear];
    }
};

int main()
{
 int size;
    cout << "Enter the size of the circular queue: ";
    cin >> size;

    circularQueue q(size);

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    cout << "Front element: " << q.getFront() << endl;
    cout << "Rear element: " << q.getRear() << endl;

    q.dequeue();
    q.enqueue(40);
    cout << "Front element: " << q.getFront() << endl;
    cout << "Rear element: " << q.getRear() << endl;

    q.dequeue();
    q.dequeue();
    q.dequeue();

    q.enqueue(50);
    cout << "Front element: " << q.getFront() << endl;
    cout << "Rear element: " << q.getRear() << endl;
    return 0;
}