#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node*next;
    Node(int val){
        data = val;
        next = nullptr;
    }
};
int main(){
    Node*head = new Node(10);
    Node*second = new Node(20);
    Node*third = new Node(30);
    head->next= second;
    second-> next = third;
    cout<<head->data<<"->";
    cout<<second->data<<"->";
    cout<<third->data<<endl;
    return 0;
}
