#include<iostream>
using namespace std;

int binarySearch(int arr[],int size,int key){
    int start=0;
    int end=size-1;
    int mid=(start+mid)/2;
    

    while(start <= end){
      if(arr[mid]==key){
      return mid;
      }

      if(key > arr[mid])
     {
      start=mid+1;
     }
      else
     {
       end=mid-1;
     }
     mid=(start+end)/2;
   }
 return -1;
}
    
int main(){

int even[6]={2,4,6,8,10,12};
int odd[5]={1,3,5,7,9};
cout<<even[4]<<endl;



cout<<even[4]<<endl;
int index = binarySearch(even, 6, 20);
cout<<"index of 12 is"<< index;

cout<<"done successfully";

    return 0;
}