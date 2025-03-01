//Printing sum of array by adding one by one elements.
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
