#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node *left,*right;
    Node(int val){
        data = val;
        left = right = NULL;
    }
};
  
//............. check for bst.....................
bool isBST(Node* root,Node *min ,Node *max){
    if(root == NULL){
        return true;
    }
    if(min != NULL && root->data <= min ->data){
        return false;
    }
    if(max != NULL && root->data >= max ->data){
        return false;
    }
    bool leftvalid = isBST(root->left,min,root);
    bool rightvalid = isBST(root->right,root,max);
    return leftvalid and rightvalid;
}


int main(){
Node *root = new Node(30);
root->left = new Node(20);
root->right = new Node(40);
root ->left->left = new Node(10);
root->right->right = new Node(50);
root->right->left = new Node(34);
if(isBST(root,NULL,NULL)){
    cout<<"is BST";
}
else{
    cout<<"Not a BST";
}
return 0;
}
/*
            30
            /\
          20  40
         /    / \
        10   35  50
*/