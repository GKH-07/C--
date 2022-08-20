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
//--------------------------------------------O(n)-----------------------------
// int heightOFbinaryTREE(treenode *root){
//     if(root == NULL){
//         return 0;
//     }
//     queue<treenode*> q;
//     q.push(root);
//     q.push(NULL);
//     int level =1;
//     while(!q.empty()){
//       treenode* node = q.front();
//       q.pop();
//       if(node != NULL)
//       {
//           if(node->left){
//               q.push(node->left);
//           }
//           if(node->right){
//               q.push(node->right);
//           }
//       }
//       else if(!q.empty())
//       {
//           q.push(NULL);
//           level++;
//       }
//     }
//     return level;
// }
// ---------------------recursive approach-----O(n)------------------------------------------
// int heightOFbinaryTREE(treenode *root){
//     if(root == NULL){
//         return 0;
//     }
//     int LEFTHEIGHT = heightOFbinaryTREE(root->left);
//     int RIGHTHEIGHT = heightOFbinaryTREE(root->right);
//     return max(LEFTHEIGHT,RIGHTHEIGHT) + 1;
// }
//------------------------------------------------------------------------
int main(){
treenode *root = new treenode(1);

root->left = new treenode(2);
root->right = new treenode(3);

root->left->left = new treenode(4);
root->left->right = new treenode(5);

root->right->left = new treenode(6);
root->right->right = new treenode(7);
root->right->left->left = new treenode(8);
root->right->right->right = new treenode(9);

root->right->right->right->right = new treenode(10);
//cout<<heightOFbinaryTREE(root);
/*
     1
   /   \
  2     3
 / \   / \
4   5  6  7
      /    \
     8      9 
             \
              10
 
*/
return 0;
}