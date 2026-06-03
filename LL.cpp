#include<iostream>
using namespace std;
class Node{
public:
    int data;
    Node*next;
    // constructer
    Node(int val){
        data=val;
        next = nullptr;
    }
};
void insertAtEnd(Node*&head,int val){
    Node*newNode = new Node(val);
    if(head == nullptr){
        head = newNode;
        return;
    }
    Node* temp = head;
    while(temp -> next !=nullptr){
        temp = temp ->next;
    }
    temp ->next = newNode;
}
void display(Node*head){
    Node*temp = head;
    while(temp != nullptr){
        cout<<temp->data<<"->";
        temp = temp ->next;
    }
    cout<<"null"<<endl;
}
int main(){
    Node*head=nullptr;
    insertAtEnd(head,10);
    insertAtEnd(head,20);
    insertAtEnd(head,30);
    insertAtEnd(head,40);
    display(head);
    return 0;
    
}