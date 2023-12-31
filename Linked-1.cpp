#include<iostream>
using namespace std;

struct Node{
    int data;
    Node *next;
    Node(int x){
        data=x;
        next=NULL;
    }
};
void Printlist(Node *head){
    Node *curr=head;
    while(curr!=NULL){
        cout<<curr->data<<" ";
         curr=curr->next;
    }
}

Node *insertBegin(Node *head,int x){
    Node *temp= new Node(x);
    temp->next=head;
    return temp;
}


int main(){
    Node *head=new Node(10);
    Node *temp1=new Node(20);
    Node *temp2=new Node(30);
    head->next=temp1;
    temp1->next=temp2;
    Printlist(head);
    return 0;
}