#include<iostream>
#include<map>

using namespace std;

int main(){
    map<int ,string> m;


    m[1]="love" ;
    m[2]="babbar";
    
    m.insert({5,"bheem"});
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }
}