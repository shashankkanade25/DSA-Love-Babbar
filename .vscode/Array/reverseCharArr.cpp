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
    char name[10];
    cout<<"Enter name :"<<endl;
    cout << name<<endl; 
    reverseChar(name);
    cout<<"Reversed name is:"<<reverseChar(name)<<endl;
    cout << name<<endl;
    return 0;

}