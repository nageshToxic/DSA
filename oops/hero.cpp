// Program to illustrate the working of
// objects and class in C++ Programming

#include <iostream>
using namespace std;

// create a class
class Room {
private:
   

public:
   int weight;
   int age=100;
   int height;
    int getAge() {
        return this->age;
    }
    int setWeight(int w){
        this->weight=w;
    }

};

class male :public Room{
  public:
         string color;
         void sleep(){
            cout<<"Male is Sleeping"<<endl;
         }  
};

int main() {

    male m;
    
    
    cout << "Enter room's Name : "<<m.age;
    m.sleep();
 
    return 0;
}