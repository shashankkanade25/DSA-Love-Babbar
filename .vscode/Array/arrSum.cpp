// #include<iostream>
// using namespace std;

// void sumPrint(int arr[],int n){
//     int sum=0;
//     for(int i=0;i<n;i++){
//         sum+= arr[i] ;//addition of array elements 
//         cout<<"sum of array element is:"<<sum<<endl;
//     }
// }
// int main(){

//     int arrSum[5]={2,7,1,-4,11};        //declared arr
//     int n= sizeof(arrSum);      //declared n as size


//     sumPrint(arrSum,n);     //function call in this scope
//     return 0;
// }  
#include <iostream>
using namespace std;

void sumPrint(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i]; // Addition of array elements
        cout << "Sum after adding element " << arr[i] << " is: " << sum << endl;
    }
}

int main() {
    int arrSum[5] = {2, 7, 1, -4, 11}; // Declared array
    int n = sizeof(arrSum) / sizeof(arrSum[0]); // Calculate number of elements in the array

    sumPrint(arrSum, n); // Function call in this scope
    return 0;
}
