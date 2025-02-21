//diameter of tree optimised  O(n)
//use pair<int,int> stores dia,hei in same traversal so
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
pair <int,int>diameterFast(node* root){
    if(root == NULL){
        pair<int,int> p = make_pair(0,0);
        return p;
    }

    pair<int,int> left=diameterFast(root->left);
    pair<int,int> right=diameterFast(root->right);

    // int opt1=left.first;
    // int opt2=right.first;
    int opt3=left.second + right.second + 1;

    pair<int,int> ans;
    ans.first=max(left.first,max(right.first,opt3));    //dia
    ans.second=max(left.second,right.second)+1;
    return ans;

}
int diameter(node* root){
    return diameterFast(root).first;
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