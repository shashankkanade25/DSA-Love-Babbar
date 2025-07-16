#include <iostream>
using namespace std;
void printArray(int arr[],int size){
    for (int i=0 ; i<size ; i++){
        cout<<arr[i]<<" ";
    } 
}
int findUnique(int arr[],int size){
    int ans = 0;                    //to store unique
    for (int i=0 ; i<size ; i++){   //arr index sts frm 0 so x =
            ans=ans ^ arr[i];       //XOR to find unique number  a^a = 0  a^0 = a
        }
        return ans;
    }

    //The XOR method is only useful when exactly one element is Unique, while others appear twice.
    
int main(){
int arr[7]={2,3,4,3,2,5,4};

int uniqueElement = findUnique(arr, 7);  // Store the return value
    cout << "Unique element: " << uniqueElement << endl;

    //uniqueElement is a variable that stores value returned by function(findUnique)

cout<<"Printing Array elements :";
printArray(arr,7);
    return 0;
}
