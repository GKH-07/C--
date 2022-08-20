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
// balanced bst from sortef array..........................
Node* Bst(int arr[],int start,int end){
    if(start > end){
        return NULL;
    }
    int mid = (start+end)/2;
    Node *root = new Node(arr[mid]);
    root->left = Bst(arr,start,mid- 1);
    root->right = Bst(arr,mid+ 1,end);
    return root;
}
void preorderprint(Node* root){
    if(root == NULL) return ;
    cout<<root->data<<" , ";
    preorderprint(root->left);
    preorderprint(root->right);
    
}
int main(){
int arr[]={10,20,30,35,40,50};

Node *root = Bst(arr,0,5);
preorderprint(root);
return 0;