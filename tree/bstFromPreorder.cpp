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
// key -> current value jise built kerna h 
// n size of array
// preorderindex -> integer pointer repersenting the current elemnet in preorder array//

Node *bst(int preorder[],int* preorderindex,int key,int min,int max,int n){
    if(*preorderindex >= n){
        return NULL;
    }
        Node* root = NULL;
        if(key > min && key < max){
            root = new Node(key);
            *preorderindex = *preorderindex + 1;

           if(*preorderindex < n){
                root->left = bst(preorder,preorderindex,preorder[*preorderindex],min,key,n);
            }
           if(*preorderindex < n){
                root->right = bst(preorder,preorderindex,preorder[*preorderindex],key,max,n);
            }
                        
        }
        return root;
}



void printpreorder(Node *root){
    if(root == NULL){
        return;
    }
    cout<<root->data<<" ";
    printpreorder(root -> left);
    printpreorder(root -> right);
}
int main(){
/*
        10
        /\
      8    12
     /      \
    4        14    
    preorder - 10 8 4 12 14
*/
int preorder[] = {10,8,4,12,14};
int n = 5;
int preorderindex = 0;
Node *root = bst(preorder,&preorderindex,preorder[0],INT_MIN,INT_MAX,n);
printpreorder(root);
return 0;
}