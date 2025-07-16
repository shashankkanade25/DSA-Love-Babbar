// Check array is sorted or not

#include <iostream>
using namespace std;

bool isSorted(int arr[], int n)
{
    for (int i = 0; i < n-1; i++){
        if (arr[i] > arr[i + 1]){
            return false;
        }   
    return true;
    }
}

int main()
{
    int arr[6] = {2, 6, 8, 10, 30, 50};
    int n = sizeof(arr) / sizeof(arr[0]);

    if (isSorted(arr,n)){
        cout << "Array is Sorted" << endl;
    }
    else{
        cout << "Array is not Sorted" << endl;
    }

    return 0;
}