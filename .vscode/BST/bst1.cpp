//BST insertion  O(log n)
//BST deletion   O(log n)
#include<iostream>
#include<queue>
using namespace std;
struct node{
    int data;
    node* left;
    node* right;

    node(int val){
        data=val;
        left=nullptr;
        right=nullptr;
    }
};
void levelOrderTraversal(node *root){           //(Breadth First Search)
    queue<node*> q;
    q.push(root);
    q.push(NULL);   //for-> level completed

    while (!q.empty()){
        node *temp = q.front();
        q.pop();

        if (temp == NULL){ // old level completed
            cout << endl;                           //for new line
            if (!q.empty()){ // q still has ele.
                q.push(NULL);
            }
            }
            else
            {
                cout << temp->data << " ";
                if (temp->left){
                    q.push(temp->left);
                }
                if (temp->right){
                    q.push(temp->right);
                }
            }
        }
    }
node* insertIntoBST(node* &root, int d){
    if(root==NULL){         //base
        root = new node(d);
        return root;
    }
    
    if(d > root ->data){ 
        //big ... insert into right
        root->right=insertIntoBST(root->right,d);
    }
    else{
        root->left=insertIntoBST(root->left,d);
    }
    return root;


}
void takeInput(node* &root){
    int data;
    cin>>data;

    while(data!=-1){
        insertIntoBST(root,data);
        cin>>data;
    }
}

void inorder(node* root){  //(LNR)
        //base case
        if(root == NULL){
            return;
        }

        inorder(root->left);        //L
        cout<<root->data<<" ";      //N
        inorder(root->right);       //R
    }

    void preorder(node* root){
        if(root == NULL){
            return ;
        }

        cout<<root->data<<" ";      //N
        preorder(root->left);       //L
        preorder(root->right);      //R
    }

    // bool searchIntoBST(node* root ,int x){
    //     if(root==NULL){     //base case
    //         return false;       
    //     }

    //     if (root->data == x){
    //         return true;
    //     }


    //     if( x > root -> data ){     //x big go right
    //       return searchIntoBST(root->right,x);  
    //     }
    //     else{                   //x small go left
    //        return searchIntoBST(root->left,x);
    //     } 
    // }
    
    node* minVal(node* root){
        while(root->left != NULL){
            root=root->left;
        }
        return root;
    }

    node* deleteFromBST(node* root, int val){
        //base case
        if(root==NULL)   return NULL;

        if (val < root->data) {  // Go to left subtree
        root->left = deleteFromBST(root->left, val);
        } 
        else if (val > root->data) { // Go to right subtree
        root->right = deleteFromBST(root->right, val);
        } 
        else{
        //find the node todelete
        if(root -> data == val){
            //0 child
            if(root->left == NULL && root->right == NULL){
                delete root;
                return NULL;
            }
            //1 child

            //left child
            if(root->left!=NULL && root->right == NULL){
                node* temp = root->left;    //stored left
                delete root;
                return temp;
            }

            //right child
            if(root->left == NULL && root->right != NULL){
                node* temp = root->right;
                delete root;
                return temp;
            }

            //2 child
            node* temp = minVal(root->right);   //get inorder succesor
            root->data = temp->data;        //copy successor value
            root->right = deleteFromBST(root->right,temp->data);    //delete successor
        }
        }
        return root;
    }
int main(){

    node* root=NULL;
    cout<<"Enter data to create BST:";
    takeInput(root);
    
    cout<<"Printing the BST:"<<endl;
    levelOrderTraversal(root);
    cout<<endl;

    cout<<"Printing Inorder:"<<endl;
    inorder(root);
    cout<<endl;

    cout<<"Printing Preorder:"<<endl;
    preorder(root);
    cout<<endl;

    // cout<<"Enter the Searching element: ";
    // int x;
    // cin>>x;

    // if(searchIntoBST(root,x)){
    //     cout<<x<<" is present in BST "<<endl;
    // }
    // else{
    //     cout<<x<<" is NOT present in BST "<<endl;
    // }

    cout<<"Enter the Deleting value :"<<endl;
    int delVal;
    cin>>delVal;
    root = deleteFromBST(root,delVal);

    cout << "BST after deletion (Inorder Traversal): ";
    inorder(root);
    cout << endl;
return 0;
}

//10 25 8 5 40 3 15 -1