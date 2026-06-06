#include<iostream>
#include<vector>
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
Node* convert(int arr[],int n){
    Node*head= new Node(arr[0]);
    Node*mover = head;
    for(int i=1;i<n;i++){
        Node*temp = new Node(arr[i]);
        mover ->next = temp;
        mover = temp;
    }
    return head;
}
int main(){
    int nums[]={0,1,2,3,4,5,6};
    int n = sizeof(nums);
    Node* LL= convert(nums,n);
    Node* temp = LL;

while(temp != nullptr){
    cout << temp->data << "->";
    temp = temp->next;
}
}