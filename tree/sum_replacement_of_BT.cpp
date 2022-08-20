#include<bits/stdc++.h>
using namespace std;
class treenode{
public:
int data;
treenode *left,*right;
treenode(int val){
    data = val;
    left = right = NULL;
}
};
void SumReplacement(treenode *root){
    if(root == NULL){
        return;
    }
    SumReplacement(root->left);
    SumReplacement(root->right);
    if(root->left != NULL){
        root->data += root->left->data;
    }
    if(root->right != NULL){
        root->data += root->right->data;
    }
    
}
void preorder(treenode *root){
    if(root == NULL){
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
int main(){
treenode *root = new treenode(1);

root->left = new treenode(2);
root->right = new treenode(3);

root->left->left = new treenode(4);
root->left->right = new treenode(5);

root->right->left = new treenode(6);
root->right->right = new treenode(7);
preorder(root);
cout<<endl;
SumReplacement(root);
preorder(root);
/*
     1
   /   \
  2     3
 / \   / \
4   5  6  7
pre : 1 2 4 5 3 6 7
*/
return 0;
}