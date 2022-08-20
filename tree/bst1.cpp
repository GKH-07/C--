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
Node *insertBST(Node *root,int val){
    if(root == NULL){
        return new Node(val);
    }
    if(val < root->data){
        root->left = insertBST(root->left,val);
    }
    if(val > root->data){
        root->right = insertBST(root->right,val);
    }
    return root;
}
Node* search(Node*root,int key){
    if(root == NULL){
        return NULL;
    }
    if(root->data == key){ 
        return root;
    }
    if(root->data > key){
        return search(root->left,key);
    }
    return search(root->right,key);
        
}

Node *inorderSucc(Node*root){
    Node* curr = root;
       while(curr && curr->left != NULL){
           curr = curr->left;
       }
       return curr; 
}
Node *deleteInBst(Node* root,int key){
    if(root == NULL){
        return NULL;
    }
    if(root->data > key){
        root->left =  deleteInBst(root->left,key);
    }
    else if(root->data < key){
        root->right =  deleteInBst(root->right,key);
    }  
    else  {
        if(root ->left == NULL){
            Node *temp = root->right;
            free(root);
            return temp;
        }
        else if(root->right == NULL){
            Node *temp = root->left;
            free(root);
            return temp;
        }
        // case 3
        Node* temp = inorderSucc(root->right);
        root->data = temp->data;
        root->right = deleteInBst(root->right,temp->data);
        //mine approch ki root ka right hi uska inorder succesor hoga,isliye uska data root me daalo aur uske next ko null ker do
        // but this only work when root->right ke further child na ho...
        // Node* temp = root->right;
        // root->data = temp->data;
        // root->right = NULL;
    }
    return root;
 
}
void inorder(Node *root){
    if(root == NULL){
        return;
    }
    inorder(root -> left);
    cout<<root->data<<" ";
    inorder(root -> right);
}
int main(){
Node *root = NULL;

root = insertBST(root,30);
insertBST(root,40);
insertBST(root,35);
insertBST(root,10);
insertBST(root,20);
insertBST(root,50);
//inorder(root);
// if(search(root,580) == NULL){
//     cout<<"doesn't find";
// }
// else{
//     cout<<"key found";
// }
inorder(root);
cout<<endl;
root = deleteInBst(root,30);
inorder(root);
return 0;
}
/*
            30
            /\
          20  40
         /    / \
        10   35  50
*/