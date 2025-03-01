#include <iostream>
using namespace std;

int removeDuplicates(int arr[], int &n) {
    if(n == 0 || n == 1){
        return n;
    }

    int i = 0;  //store unique ele.
    for(int j = 0 ; j < n-1 ; j++){
        if(arr[j]!=arr[j+1]){
            arr[i++]=arr[j];
        }
    }
    arr[i++]=arr[n-1];      //for last ele.
    return i;
}
int main() {
    int arr[] = {1, 2, 2, 3, 4, 4, 5, 7 ,7};
    int n = sizeof(arr) / sizeof(arr[0]);

    int newsize = removeDuplicates(arr,n);

    cout << "Array after removing duplicates: ";
    for (int i = 0; i < newsize; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
