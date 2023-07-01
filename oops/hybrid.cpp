#include<iostream>
using namespace std;


class A{
    public:
    void func1(){
        cout<<"A\n";
    }
};
class D{
    public:
   void funcd(){
        cout<<"D\n";
    }
};

class B: public A{
    public:
    void func2(){
        cout<<"B\n";
    }
};
class C: public D{
    public:
    void func3(){
        cout<<"C\n";
    }
};
class C: public A{
    public:
    void func3(){
        cout<<"C\n";
    }
};




int main(){
   A a;
   a.func1();
   B b;
   b.func2();
   C c;
   c.func3();

   
  
    return 0;
}