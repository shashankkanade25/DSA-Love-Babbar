#include<iostream>
using namespace std;

void reverseChar(char name[],int n){

    int start = 0;
    int end = n-1;
    while(start<end){
        swap(name[start],name[end]);
        start++;
        end--;
    } 
}
int main (){
    char name[50];
    cout<<"Enter name :";
    cin>> name; 

     // Calculate the length of the input string
     int length = 0;
     while (name[length] != 0) {
         length++;
     }
    
    reverseChar(name,length);
    cout<<"Reversed name is:"<<name<<endl;
    return 0;

}