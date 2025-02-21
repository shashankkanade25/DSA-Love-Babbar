#include<iostream>
using namespace std;

// int diagonalSum(int mat[][4],int n){
//     int sum=0;

//     // pd: j = i
//     // sd: j = n-1-i

//     for(int i=0; i<n; i++){
//         for(int j=0; j<n; j++){
//             if(i==j){
//                 sum+= mat[i][j];
//             } else if (j==n-1-i){   //elseif perform both operation
//                 sum+= mat[i][j];    
//             }
//         }
//     }
//     return sum;
// }

int diagonalSum(int mat[][4],int n){
    int sum=0;
    for(int i=0; i<n;i++){
        sum+= mat[i][i];
        
        if(i !=n-i-1){  //to avoid common
            sum+= mat[i][n-i-1];
        }    
    }
    return sum; 
}    

int main(){

    int matrix[4][4]={{1,2,3,4},{4,5,6,7},{8,9,0,10},{11,12,13,14}};
    int n=4;
    //n means mat how by how
    cout<<diagonalSum(matrix,n)<<endl;

    return 0;
}