#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;
 
int main(){
    //creation
    unordered_map<string,int> m;

    //insertion
    //1
    pair<string,int> p=make_pair("shashank",3);
    m.insert(p);

    //2
    pair<string,int> p2("kanade",2);
    m.insert(p2);

    //3
    m["sk"]=4;

    cout<<m["shashank"]<<endl;
    cout<<m.at("sk")<<endl;

    cout<< m.size()<<endl;

    //to check presence
    cout<< m.count ("bro") <<endl;      //0
    cout<< m.count ("shashank") <<endl;

    m.erase("sk");
    cout<<"size is: "<<m.size()<<endl;

    cout<<m["unknownkey"]<<endl;


    for (auto i : m ){
        cout<<i.first<<" "<<i.second<<endl;
    }

    //iterator
    unordered_map<string,int> :: iterator it = m.begin();

    while( it != m.end()){
        cout<< it->first <<" "<< it-> second <<endl;
        it++;
    }
  
return 0;
}