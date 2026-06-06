#include<iostream>
using namespace std;
class Node{
public:
    int data ;
    Node*next;
    // constructor
    Node(int value){
        data = value;
        next = nullptr;
    } 
};
int main(){
    Node*head = new Node(10);
    Node*second = new Node(20);
    Node*third = new Node(30);
    head ->next = second;
    second->next = third;
    cout<<head->data<<"->";
    cout<<second->data<<"->";
    cout<<third->data;
    return 0;
}