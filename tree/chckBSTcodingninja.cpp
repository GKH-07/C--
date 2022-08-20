#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* left ,*right;
    Node(int val){
        data = val;
        left = right = NULL;
    }
};
// ...................................................this method take n^2 complexity ...................................
// int minimum(Node *root){
//     if(root == NULL){
//         return INT_MAX;
//     }
//     return min(root->data,min( minimum(root->left),minimum(root->right) )  );
// }
// int maximum(Node *root){
//     if(root == NULL){
//         return INT_MIN;
//     }
//     return max(root->data,max( maximum(root->left),maximum(root->right) )  );
// }
// bool chckBST(Node* root){
//     if(!root) return true;
//     int leftmax = maximum(root->left);
//     int rightmax = minimum(root->right);
//     bool output = (root->data > leftmax) && (root->data < rightmax) && (chckBST(root->left)) && (chckBST(root->right));
//     return output;
// }
//..........................................................................................

class isBst{
    public:
    bool isBst;
    int minimum;
    int maximum;
    ff
};

int main()
{
  Node* root = new Node(3);
  root->left = new Node(82);
  root->right = new Node(4);
// cout<<chckBST(root);
 
  return 0;
}