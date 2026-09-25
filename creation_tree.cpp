#include<iostream>
#include<vector>
using namespace std;
//defining the node
class Node{
public:
    int data;
    Node*left;
    Node*right;
    //constructor
    Node(int value){
        data=value;
        left=NULL;
        right=NULL;
    }
};
static int idx=-1;
Node*buildtree(vector<int>preorder){
    idx++;
    if(preorder[idx]==-1){
        return NULL;
    }
    Node*root=new Node(preorder[idx]);
    root->left=buildtree(preorder);
    root->right=buildtree(preorder);
    return root;
}
int main(){
    vector<int> preorder = {
    1,
    2,
    4, -1, -1,
    5, -1, -1,
    3,
    6, -1, -1,
    7, -1, -1
    };
    Node*root=buildtree(preorder);
    cout<<root->data<<endl;
    cout<<root->left->data<<endl;
    cout<<root->right->data<<endl;
}
