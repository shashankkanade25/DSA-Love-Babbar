// adjacency matrix
#include<iostream>
using namespace std;
 
int main(){
    int n,m;        //node,edge
    cin>>n>>m;
    int adj[n+1][m+1];
    for(int i=0;i<m;i++){
        int u,v ;        //input as edge betn u-v
        cin>>u>>v;
        adj[u][v] = 1;      //in unweighted graph its = 1
        adj[v][u] = 1;      //in weighted graph its = wt

    }
return 0;
}