#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

class Stack {
  Node* top; 
public:
    
    Stack() {
        top = nullptr;
        
    }
    void push(int val){
        Node* newnode = new Node();
        newnode->data=val;
        newnode->next=top;
        top=newnode;
    }
    void pop() {
        if (isEmpty()) {
            cout << "Stack underflow!" ;
            return;
        }
        Node* temp = top; // Temporary pointer to the top
        top = top->next;  // Update top to the next node
        cout << "Popped " << temp->data << " from the stack.\n";
        delete temp; // Free the memory
    }

    // Peek operation
    int peek() {
        if (isEmpty()) {
            cout << "Stack is empty.\n";
            return -1; // Return a sentinel value
        }
        return top->data;
    }

    // Check if the stack is empty
    bool isEmpty() {
        return top == nullptr;
    }

    // Display the stack elements
    void display() {
        if (isEmpty()) {
            cout << "Stack is empty.\n";
            return;
        }
        Node* temp = top;
        cout << "Stack elements are: ";
        while (temp != nullptr) {
            cout << temp->data << " ";
            temp = temp->next;  //temp update
        }
        cout << endl;
    }

    // Destructor to free memory
    ~Stack() {
        while (!isEmpty()) {
            pop();
        }
    }
};

// Main function
int main() {
    Stack stack;

    stack.push(10);
    stack.push(20);
    stack.push(30);

    stack.display();

    cout << "Top element is: " << stack.peek() << endl;

    stack.pop();
    stack.display();

    return 0;
}
