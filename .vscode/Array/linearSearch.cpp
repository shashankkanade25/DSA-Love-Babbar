#include <iostream>
using namespace std;
bool search(int arr[],int size , int key){
    for (int i=0;i<size;i++){
        if(arr[i]==key){        //comparison op used
          return 1;     //cuz bool return type
        }
    }return 0;
}//here defined boolfunction fun name, para list 
   
int main(){

int arr[6]={5,6,-26,0,74,88};
cout <<"enter the seaching key:"<<endl;
int key;  //key declared before cin cause,error
cin >> key;

bool found=search(arr,6,key);     //bool fun call  use bool found use if else condition 
if(found){
    cout<<"KEY PRESENT BETA "<<endl;
}
else{
    cout<<"ABSENT BETA"<<endl;
}
return 0;

}