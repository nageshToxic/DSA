#include<iostream>
using namespace std;
class Animal{
    public:
    int age;
    int weight;
    public:
    void Bark(){
        cout<<"Barking \n";
    }

    
};


class human {
    public:
    string color;

    public:
    void speak(){
        cout<<"speaking\n";
    }
};



class hybrid : public Animal,public human{

};






int main() {

    hybrid obj; 
    obj.Bark();
    obj.speak();

return 0;
}