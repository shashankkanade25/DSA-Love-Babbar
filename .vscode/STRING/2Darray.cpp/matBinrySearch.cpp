#include<iostream>
#include<vector>
using namespace std;
bool searchInRow(vector<vector<int>>& mat, int target,int row){
   int n= mat[0].size(); //need only col to search in row
   int st = 0 , end = n-1;
   
   while(st <= end){
        int mid= st+(end-st)/2;  //mid is col
        if(target == mat[row][mid]){
            return true;
        } else if( target > mat[row][mid]){ //=>right
            st = mid+1;
        } else{    //=>left
            end = mid-1;
        }
   }
   return false;
}

bool searchMatrix(vector<vector<int>>& mat, int target){
    //bs on corrct row
    int m= mat.size() , n= mat[0].size(); // m:row,n:col

    int stRow=0 , endRow=m-1;
    while(stRow <= endRow){
        int midRow = stRow + (endRow - stRow)/2; 
         if(mat[midRow][0] <= target && target <= mat[midRow][n-1]){
            //found row => bs on this row
            return searchInRow(mat, target, midRow);
        } else if(target > mat[midRow][n-1]){   //=>down
            stRow = midRow + 1;
        } else{ //=>up
            endRow = midRow - 1;
        }
    }
    return false;
}

int main(){
    vector<vector<int>> matx ={{1,2,3,4},{4,5,6,7},{8,9,0,10},{11,12,13,14}};
    int target ;

    cout<<searchMatrix(matx,66);

    return 0;

}