#include<iostream>
using namespace std;

bool linearSearch(int matrix[][3], int rows, int cols, int key ){
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            if(matrix[i][j]==key){
                cout<<"Element found"<<endl;
                return true;
            } 
        }
    }
    cout<<"not found"<<endl;
    return false;
}
int main(){

    int matrix[4][3]={{1,2,3},{3,4,5},{8,7,6},{9,8,7}};
    int rows = 4;
    int cols = 3;
    int key;
    cout<<"Enter key:";
    cin>>key;

   linearSearch(matrix,rows,cols,key);

return 0;
}
