#include<iostream>
#include<conio.h>
using namespace std;
int main(){
    // int m;
    // int n;
    int arr[3][3];
    // cout<<"enter no of rows and coloumns\n";
    // cin>>m>>n;
    cout<<"enter elements\n";
    for(int i=0;i<3;i++){
     for(int j=0;j<3;j++){
        cin>>arr[i][j];
     }
    }
    for(int i=0;i<3;i++){
     for(int j=0;j<3;j++){
        cout<<arr[i][j]<<" ";
     }
     cout<<"\n";
    }

    return 0;
}