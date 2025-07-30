#include <iostream>
#include <queue>
using namespace std;

class node{
public:
    int data;
    node *left;
    node *right;

    node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};

node *buildTree(node *root){
    cout << " Enter the data: "<<endl;
    int data; 
    cin >> data;
    root = new node(data);

    if (data == -1){
        return NULL;
    }

    cout << "Enter data for Inserting left :" << data;
    root->left = buildTree(root->left);
    cout << "Enter data for Inserting right :" << data;
    root->right = buildTree(root->right);
    return root;
}

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

    void inorder(node* root){  //(LNR)
        //base case
        if(root == NULL){
            return;
        }

        inorder(root->left);        //L
        cout<<root->data<<" ";      //N
        inorder(root->right);       //R
    }

    void preorder(node* root){      //(NLR)
        if(root == NULL){
            return;
        }

        cout<<root->data<<" ";  //N
        preorder(root->left);   //L
        preorder(root->right);  //R

    }

    void postorder(node* root){      //(LRN)
        if(root == NULL){
            return;
        }
        postorder(root->left);   //L
        postorder(root->right);  //R
        cout<<root->data<<" ";  //N
        
    }

    void buildFromLevelOrder(node* &root){
        queue<node*>q;
        cout<<"Enter data for the root :"<<endl;
        int data;
        cin>>data;
        root = new node(data);
        q.push(root);

        while(!q.empty()){
            node* temp = q.front();
            q.pop();
            
            cout<<"Enter data for left :"<<" "<<temp->data;
            int leftData;
            cout<<endl;
            cin>>leftData;

            if(leftData != -1){
                temp -> left = new node(leftData);
                q.push(temp->left);
            }

            cout<<"Enter data for right :"<<" "<<temp->data;
            int rightData;
            cout<<endl;
            cin>>rightData;

            if (rightData != -1){
                temp -> right = new node(rightData);
                q.push(temp->right);
            }
        } 

    }

    

int main(){

    node *root = NULL;

    buildFromLevelOrder(root);
    levelOrderTraversal(root);
    // root = buildTree(root);
    // //1 3 6 -1 -1 8 -1 -1 5 11 -1 -1 -1
    // cout<<"printing the level order traversal output :"<<endl;
    // levelOrderTraversal(root);

    // cout<<"Inorer Traversal is :";
    // inorder(root);
    // cout<<endl;

    // cout<<"Preorder traversal :";
    // preorder(root);
    // cout<<endl;

    // cout<<"Postorder Traversal is :";
    // postorder(root);
    // cout<<endl;

    return 0;
}