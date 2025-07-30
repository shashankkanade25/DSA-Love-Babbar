//diameter of tree  O(n^2)
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

int diameter(node* root){
    if (root==NULL){
        return 0;
    }

    int left = diameter(root->left);
    int right = diameter(root->right);
    int both=height(root->left)+height(root->right)+1;

    int ans=max(left,max(right,both));

}
int main(){
    node* root=new node(1);
    root->left=new node(3);
    root->left->left=new node(5);
    root->right=new node(7);
    root->right->right=new node(9);
    root->right->right->right=new node(11);

    cout<<"Diameter of tree: "<<diameter(root);
    return 0;
}