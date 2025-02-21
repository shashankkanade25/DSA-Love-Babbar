#include <iostream>
using namespace std;
void printArr(int arr[],int n){
    for(int i=0; i<n ; i++){
        cout<<arr[i]<<" ";
        }cout << endl;
}
void swapAltArr(int arr[],int n){   //fun for swapping
    for(int i = 0; i<n ; i=i+2){
        if (i+1 < n){       //condition
            swap(arr[i],arr[i+1]);
        }
    }
}
int main()
{

int arr[6]={4,5,2,12,8,56};
int odd[7]={4,21,87,6,78,9,34};

swapAltArr(arr,6); 
swapAltArr(odd,7);     //first swap then print
printArr(arr,6);
printArr(odd,7);


    return 0;
}