#include<iostream>
using namespace std;

class TrieNode{

    public:
    char data;
    TrieNode *children[26];
    bool isTerminal;

    TrieNode(char ch){
        data = ch;
        for(int i = 0; i<26; i++){
            children[i] = NULL;
        }
        isTerminal = false;
    }
};
class Trie{
    public:
    TrieNode* root;
    TrieNode* root = new TrieNode('\0');

    void insertUtill(TrieNode* root , string word){
        //base case 
        if(word.size() == 0){
            root->isTerminal = true;
            return;
        }

        //words will be capital assuming
        int index = word[0] - 'A';
        TrieNode* child;
        //if child is already present
        if(root->children[index] != NULL){
            child = root->children[index];
    } //if child is not present
      else{
        child = new TrieNode(word[0]);
        root->children[index] = child;
    }

    //recursive call
    insertUtill(child, word.substr(1));
    }

    void insertword(string word){
        insertUtill(root, word);
    };
    };
int main() {
  
    Trie t;
    t.insertword("HELLO");

    return 0;
}
