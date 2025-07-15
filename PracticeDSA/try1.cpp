//Rmove duplicates from an sorted array

#include<iostream>
using namespace std;

int removeduplicates(int arr[],int n){

    if(n == 0 || n == 1){           //for only one or empty array
        return n;
    }

    int j=0;                        //store the position of new unique eelment
    for(int i=0 ; i<n-1 ; i++){
        if (arr[i] != arr[i+1]){    //if next ele. is unique then store in unique array
            arr[j] = arr [i];
            j++;                    //increased the size of array(unique)
        }
    }
    arr[j++] = arr[n-1];              //store the last ele   

    return j;                       //return the new size of array
}
 
int main(){
    int arr[]={2,2,3,4,4,5,5,6};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout<<"Unique Array after removing duplicates :";

    int newArray = removeduplicates(arr,n);
    for (int i=0 ; i < newArray ; i++ ){
        cout<<arr[i]<<" ";
    }
    
return 0;
}