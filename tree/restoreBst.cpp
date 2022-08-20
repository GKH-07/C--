#include<bits/stdc++.h>
using namespace std;
class Node{
public:
int data;
Node* left,*right;
    Node(int val)
    {
    data = val;
    left = right = NULL;
    }
};
void calPointer(Node *root,Node **first,Node **mid,Node **last,Node **prev){
    if(root == NULL) return;
    // cal in inorder manner left->root->right
    calPointer(root->left,first,mid,last,prev);
    
    if(*prev && root->data < (*prev)->data)
    {
        // agr first time viulate hi rhi hogi property than first will be NULL
        if(!*first)
        {
            *first = *prev;
            *mid = root;
        }
        else{
            *last = root;
        }
    }
    *prev = root;
    calPointer(root->right,first,mid,last,prev);
}


void swap(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}




void restore(Node * root){
    Node* first,*mid,*last,*prev;
    first = NULL;
    mid = NULL;
    last = NULL;
    prev = NULL;
    calPointer(root,&first,&mid,&last,&prev);
    // case 1  the nodes are not adjecent in inorder array
    if(first && last){
        swap(&(first->data) , &(last->data));
    }
    // case 2
    else if(first && mid){
        swap(&(first->data),&(mid->data));
    }
}
void inorder(Node *root){
    if(!root){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
int main(){
/*
                        6
                       / \
                      3   9     let we swap 3 & 9(voilate tree property)
                     / \   \
                    1   4   13
*/
 Node *root = new Node(6);
 root->left = new Node(9);
 root->right = new Node(3);
 root->left->right = new Node(4);
 root->left->left = new Node(1);
 root->right->right = new Node(13);
 inorder(root);
 restore(root);
 cout<<endl;
 inorder(root);
 
 
return 0;
}