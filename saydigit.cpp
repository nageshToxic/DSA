#include<iostream>
using namespace std;

void saydigit(int n,string arr[]){
  //base case
  if(n==0){
    return ;
  }


  //proceess
  int digit = n%10;
  n=n/10;
  cout<<arr[n]<<" ";
  
  saydigit(n,arr);

}


int main(){
 int n;
 cin>>n;
 string arr[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
 saydigit(n,arr);



    return 0;
}