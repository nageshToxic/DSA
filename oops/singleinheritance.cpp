#include<iostream>
using namespace std;
class Animal{
    public:
    int age;
    int weight;
    public:
    void speak(){
        cout<<"pup speaking\n";
    }

    
};


class dog : public Animal{

};
class pup : public dog{

};



int main(){
   pup p;
   p.speak();
  

    return 0;
}