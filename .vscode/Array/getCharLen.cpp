#include<iostream>
using namespace std;

int getLength(char name[]){
    int count = 0;
    for (int i=0; name[i] != '\0' ;i++){     //null character '\0' marks the end of the string
        count++;
    }
    return count;
}
int main(){

    char name[10];
    cout<<"Enter the name:";
    cin >> name;

    cout<<"your name is:";
    cout<< name<<endl;

    cout<<"length of char array:"<<getLength(name)<<endl;
    return 0;
// stops execution when space tab newline given
}