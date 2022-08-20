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
//     !!!!!!!!!!!!  this isbalanced and height function together taking n n time means n^2 !!!!!!!!!!
// int height(Node *root){
//     Node *temp = root;
//     if(temp == NULL){
//         return 0;
//     }
//     return max(height(temp->left),height(temp->right)) + 1;
// }
// bool isBalanced(Node *root){
//     if(root == NULL){
//         return true;
//     }
    // if(isBalanced(root->left) == false){
    //     return false;
    // }
    // if(isBalanced(root->right) == false){
    //     return false;
    // }
//     int lheight = height(root->left);
//     int rheight = height(root->right);
//     if(abs(lheight - rheight)<=1){
//         return true;
//     }
//     else{
//         return false;
//     }
    
// }
// so we create a new function in which we use a height pointer which cal height insinde the function!!!!!!!!!!!!!!!!!!!!!!!!!1111
bool IsBalanced(Node *root,int *height){
    int lheight =0;
    int rheight =0;
    if(root == NULL){
        return true;
    }
    if(IsBalanced(root->left,&lheight) == false){
        return false;
    }
    if(IsBalanced(root->right,&rheight) == false){
        return false;
    }
     *height = max(lheight,rheight)+1;// updating curr node height.
     if(abs(lheight-rheight)<=1){
         return true;
     }
     else{
         return false;
     }
}
int main(){
Node *root = new Node(1);
// root->left->left = new Node(3);
/*
       1
      /
     2
    /
   3
*/
root->left = new Node(2);
root->right = new Node(3);
root->left->left = new Node(4);
root->left->right = new Node(5);

root->right->left = new Node(6);
root->right->right = new Node(7);
int height = 0;
if(IsBalanced(root,&height)){
    cout<<"Balanced tree";
}
else{
    cout<<"Unbalanced tree";
}
return 0;
}