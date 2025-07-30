//Height of binary tree

#include<iostream>
using namespace std;
struct node{
    int data;
    node* left;
    node* right;

    node(int val){
        val=data;
        left=nullptr;
        right=nullptr;
    }
};

int height (node* root)
{
    if (root == NULL){
        return 0;
    }

    int left=height(root->left);
    int right=height(root->right);

    return max(left,right)+1;
 
}


int main(){

    node* root=new node(1);
    root->left=new node(3);
    root->left->left=new node(5);
    root->right=new node(7);
    root->right->right=new node(9);

    cout<<"height of tree: "<<height(root);
    return 0;
}
