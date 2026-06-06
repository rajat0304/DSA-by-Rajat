#include<iostream>
using namespace std;
class Node{
public:
int data;
Node*next;
Node(int value){
    data = value;
    next = nullptr;
}
};
// creation of Linked list
Node*convert(int arr[],int n){
    Node*head = new Node(arr[0]);
    Node*mover = head;
    for(int i=1;i<n;i++){
        Node*temp = new Node(arr[i]);
        mover ->next = temp;
        mover = temp;
    }
    return head;
}//conversion of array into LL
// deletion of element from the LL
Node*deltarget(int target,Node*head){
    Node*temp = head;//creating copy of the head
    if(head ==nullptr){
        return nullptr;
    }
    if(head->data == target){
        Node* temp = head;
        head = head->next;
        delete temp;
        return head;
    }
    while(temp->next != nullptr){
        if(temp->next->data == target){
            Node*value = temp->next;
            temp->next = temp->next->next;
            delete value;
            break;
        }
        temp = temp->next;
    }
    return head;
}
// print function
void print(Node*head){
    Node*temp = head;
    while(temp != nullptr){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"null"<<endl;
}
//main function 
int main(){

    int arr[] = {10,20,30,40,50};
    int n = sizeof(arr)/sizeof(arr[0]);

    Node* head = convert(arr,n);

    cout << "Original Linked List: "<<endl;
    print(head);

    head = deltarget(30, head);

    cout << "After deleting 30: ";
    print(head);

    return 0;
}
