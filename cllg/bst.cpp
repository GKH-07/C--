#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* right,*left;
    node(int val){
        data = val;
        right = NULL;
        left = NULL;
    }
};
node *insert(node* root,int val){
    if(root == NULL){
        return new node(val);
    }
    if(val < root->data){
        root->left = insert(root->left,val);
    }
    if(val > root->data){
        root->right = insert(root->right,val);
    }
    return root;
}
void inorder(node* root){
    if(root == NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
int main(){
node* root = NULL;
// root = insert(root,40);
// insert(root,1);
// insert(root,20);
// insert(root,10);
// insert(root,0);
// inorder(root);
for(int i=0;i<5;i++){
    int a;
    cin>>a;
    root=insert(root,a);
}
cout<<"inorder"<<endl;
inorder(root);
return 0;
}