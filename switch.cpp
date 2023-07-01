#include<iostream>
using namespace std;
int main()
{
    int n1,n2;
    cout<<"Enter the two numbers:\n ";
    cin>>n1>>n2;

    char op;
    cout<<"Enter the operation:\n";
    cin>>op;
    switch (op)
    {
    case '+':
    cout<<n1+n2;
        break;
    case '-':
    cout<<n1-n2;
        break;
    case '*':
    cout<<n1*n2;
        break;
    case '/':
    cout<<n1/n2;
        break;
    case '%':
    cout<<n1%n2;
        break;
    
    default:
    cout<<"Invalid operation";
        break;
    }
    
    return 0;
}