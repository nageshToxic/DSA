#include<iostream>
using namespace std;
int main(){
    
    int n;
     int i;
    cout<<"input n";

    cin>>n;
   
    for(i=2;i<n;i++)
    {
          if(n%i==0)
        {
            cout<<"non prime";
            break;
        }
    }
    
    if(i==n){
        cout<<"prime";
    }
    
    
    return 0;
}
