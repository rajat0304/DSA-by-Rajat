#include<iostream>
#include<vector>
using namespace std;
class Node{
public:
    int data;
    Node*next;
    Node(int value){
        data=value;
        next=NULL;
    }
};
class stack{
private:
    Node*Top;
public:
    stack(){
        Top=NULL;
    }
    void push(int value){
        Node*newNode= new Node(value);
        newNode->next=Top;
        Top=newNode;
    }
    void pop(){
        if(Top == NULL){
            cout<<"stack underflow"<<"\n";
            return ;
        }
        Node*temp=Top;
        Top=Top->next;
        delete temp;
    }
    int peek(){
        if(Top == NULL){
            cout<<"stack is empty"<<endl;
            return -1;
        }
        return Top->data;
    }
    bool isempty(){
        return Top == NULL;
    }
};
int main(){
    stack st;
    st.push(10);
    st.push(20);
    st.push(30);
    cout << st.peek() << endl;

    st.pop();

    cout << st.peek() << endl;

    st.pop();

    cout << st.peek() << endl;
    return 0;
}
