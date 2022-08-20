// longest path between any two leaf
/*
     1
   /   \
  2     3
 / \   / \
4   5  6  7
diameter is 5
-> 4-2-1-3-7
 */

#include<bits/stdc++.h>
using namespace std;
class treenode{
public:
int data;
treenode *left,*right;
    treenode(int val)
    {
        data = val;
        left =  NULL;
        right = NULL;
    }
};
//------------------------------------------------------------------------
int calHeight(treenode* root){
    if(root == NULL){
        return 0;
    }
    int lheight = calHeight(root->left);
    int rheight = calHeight(root->right);
    return (max(lheight,rheight) + 1);
}
int caldiameter(treenode* root){
    if(root == NULL){
        return 0;
    }
    int LeftHeight = calHeight(root->left);
    int RightHeight= calHeight(root->right);
    int currDiameter = LeftHeight + RightHeight + 1;

    int leftDiameter = caldiameter(root->left);
    int rightDiameter= caldiameter(root->right); 

    return max(currDiameter,max(leftDiameter,rightDiameter));
}
//------------------------------------------------------------------------
int main(){
treenode *root = new treenode(1);

root->left = new treenode(2);
root->right = new treenode(3);

root->left->left = new treenode(4);
root->left->right = new treenode(5);

root->right->left = new treenode(6);
root->right->right = new treenode(7);
cout<<caldiameter(root);
return 0;
}