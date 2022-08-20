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

 int countNodes(treenode* root){
     if(root == NULL){
         return 0;
     }
     return countNodes(root->left) + countNodes(root->right) + 1;
 }
 int SUMofNODES(treenode *root){
          if(root == NULL){
         return 0;
     }
     return SUMofNODES(root->left) + SUMofNODES(root->right) + root->data;
 }


int main(){
treenode *root = new treenode(1);

root->left = new treenode(2);
root->right = new treenode(3);

root->left->left = new treenode(4);
root->left->right = new treenode(5);

root->right->left = new treenode(6);
root->right->right = new treenode(7);
cout<<countNodes(root);
cout<<"\n"<<SUMofNODES(root);
return 0;
}