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

int sumAtK(treenode *root,int k){
    if(root == NULL){
        return -1;
    }
    queue<treenode*> q;
    q.push(root);
    q.push(NULL);
    int level;
    int sum =0 ;
    while(! q.empty()){
      treenode* node = q.front();
      q.pop();
      if(node != NULL)
      {
          if(level == k){
             sum += node->data; 
          }
          if(node->left){
              q.push(node->left);
          }
          if(node->right){
              q.push(node->right);
          }
      }
      else if(!q.empty())
      {
          q.push(NULL);
          level++;
      }
    }
    return sum;
}



int main(){
treenode *root = new treenode(1);

root->left = new treenode(2);
root->right = new treenode(3);

root->left->left = new treenode(4);
root->left->right = new treenode(5);

root->right->left = new treenode(6);
root->right->right = new treenode(7);
cout<<sumAtK(root,2);
/*
     1
   /   \
  2     3
 / \   / \
4   5  6  7
*/
return 0;
}