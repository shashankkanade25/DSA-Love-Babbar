#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int val, Node* next = nullptr){
        data = val;
        next = nullptr;    
    }

};
void insertionAtstart(Node* &head,int val){
    Node* new_node = new Node(val);
    new_node -> next = head;
    head = new_node;
}

void print(Node* &head){
    Node* temp = head;
    
    while(temp -> next != nullptr){
        cout<<temp -> data;
        temp = temp -> next;
    }
    cout<<endl;
}

int main(){
    
  Node* head = nullptr;
   insertionAtstart(head,100);
   insertionAtstart(head,20);
   insertionAtstart(head,30);
   print(head);
     return 0;
}