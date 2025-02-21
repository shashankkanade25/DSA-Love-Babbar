#include <iostream>
using namespace std;

void reverseArray(int arr[],int n){
 
        int start =0;
        int end = n-1;     //function for reverse

        while(start<=end){      //jab tak condn expn true woh 
            swap(arr[start],arr[end]);
            start++;
            end--;
        } 
    }
void printArray(int arr[],int n ){
    for (int i=0 ; i<n ; i++){
        cout<<arr[i]<<" ";}  
        cout<<endl;   //fun for print
} 
int main(){

int arr[5]={3,8,52,6,-21};
int brr[]={5,67,90,22,50};

reverseArray(arr, 5); 
reverseArray(brr, 7);
                        //fun call
printArray(arr, 5);
printArray(brr, 7);
    return 0;
}