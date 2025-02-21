#include<iostream>
using namespace std;

int main(){
    int amount,note100,note50,note20,note1,ans,choice;
    cout<<"enter amount:"<<endl;
    cin>>amount;

    cout<<"enter your choice:"<<choice<<endl;
    cin>>choice;
    switch(choice){

    case 1:
    note100=amount/100;
    cout<<"no.of 100 rupee note:"<<note100<<endl;
    break;
     
    case 2: 
    note50=amount/50;
    cout<<"no.of 50 rupee note:"<<note50<<endl;
    break;

    case 3:
    note20=amount/20;
    cout<<"no.of 20 rupee note:"<<note20<<endl;
    break;
    
    case 4:
    note1=amount;
    cout<<"no.of 1 rupee note:"<<note1<<endl;
    break;
    }
}
