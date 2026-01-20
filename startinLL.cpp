#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node(int value){
        data=value;
        next=NULL;
    }
};
int main(){
    Node *Head;
    Head=NULL;
    int arr[]={2,3,6,8,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        if(Head==NULL){    //Linked list doesn't exist
            Head=new Node(arr[i]);
        }
        else{     //if linked list exist
            Node *temp;
            temp=new Node(arr[i]);
            temp->next=Head;
            Head=temp;
        }
    }
    //print value
    Node *temp=Head;
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    };
}