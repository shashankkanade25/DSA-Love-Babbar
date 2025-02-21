#include<iostream>
using namespace std;

int main(){

    int matrix[4][3]={{1,2,3},{3,4,5},{8,7,6},{9,8,7}};
    int rows = 4;
    int cols = 3;
    matrix[0][2] = 6;  //replace
    cout<<matrix[0][2]<<endl;

    for (int i=0; i<rows ; i++){
        for(int j=0; j<cols ; j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
