#include<iostream>
using namespace std;


class Node{
    public:
    int data;
    Node* next;
    Node(int d){
        this->data=d;
        this->next=NULL;
    }
};

void InsertAtHead(Node* &head,int d)
{
    Node* temp=new Node(d);
    temp->next=head;
    head=temp;
}

InsertAtTail(Node* &tail,int d){
     Node* temp=new Node(d);
     tail->next=temp;
     tail=temp;
}
void print(Node* &head){
    Node* temp=head;

    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;  
}



int main(){
   Node* node1=new Node(10);
   Node* head=node1;
   Node* tail=node1;
//    print(head);
    InsertAtHead(head,15);
    print(head);
    // print(head);
    InsertAtTail(tail,30);
    // print(head);
    InsertAtTail(tail,50);
    // print(head);
    InsertAtTail(tail,70);
    // printf(tail);
    print(head);
  


    return 0;
}