#include<iostream>
using namespace std;

class A{
  public:
  void func(){
    cout<<"A";
  }
};
class B{
  public:
  void func(){
    cout<<"B";
  }
};

class C: public A,public B{

};



int main(){
    C obj;
    obj.A::func();
    obj.B::func();
   

    return 0;
}