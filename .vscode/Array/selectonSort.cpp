#include <iostream>
using namespace std;

int selectionSort(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        int min_index = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_index]) {
                min_index = j;
            }
        }
        // Swap elements
        int temp = arr[i];
        arr[i] = arr[min_index];
        arr[min_index] = temp;
    }
}

int main() {
    int my_array[] = {64, 34, 25, 12, 22, 11, 90, 5};
    int n = sizeof(my_array) / sizeof(my_array[0]);

    selectionSort(my_array, n);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << my_array[i] << " ";
    }
    cout << std::endl;

    return 0;
}
