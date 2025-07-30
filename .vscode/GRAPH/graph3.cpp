// adjacency list
#include<iostream>
#include<vector>
using namespace std;
 
int main(){
    int n,m;        //node,edge
    cin>>n>>m;
    
    vector<int> adj[n+1];       //Adj. list
    for(int i = 0 ; i< m ;i++){
        int u,v;                // u ---> v edge
        cin>>u>>v;
        adj[u].push_back(v);    //in weighted G store in pair( val , wt)
        adj[v].push_back(u);
    }
return 0;
}