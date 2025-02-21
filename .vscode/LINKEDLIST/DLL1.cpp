#include<iostream>
using namespace std;
class node{
    public:
    int data;   //single node
    node* next;
    node* prev;

    node(int val){ //constru
        data = val;
        next = prev = nullptr;

    }
};
class DoublyLList{
    node* head;
    node* tail;

    public:
    DoublyLList(){
        head=tail=nullptr;
    }
    void push_front(int val){
        node* newnode = new node(val);
        if(head==nullptr){
            head=tail=newnode;
            }else{
            newnode->next =head;
            head->prev =newnode;
            head = newnode;
        
    }
    }
    void push_back(int val){
        node* newnode = new node(val);
         if(head==nullptr){
            head=tail=newnode;
            }else{
            newnode->prev =tail;
            tail->next =newnode;
            tail = newnode;
        
    }
    }
    void print() {
        node* temp = head;
        while(temp){
            cout<<temp->data<<"<=>";
            temp=temp->next;
        }
        cout<<"Null";
    }
};

int main(){
    DoublyLList dll;
    dll.push_front(1);
    dll.push_front(2);
    dll.push_front(3);
    
    dll.print();

    cout<<endl;

    dll.push_back(10);
    dll.push_back(20);
    dll.push_back(30);

    dll.print();

    return 0;
}