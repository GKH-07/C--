
/*
          1
        /   \
       2     3
      / \   / \
     4   5 6   7
*/
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
void Rightview(Node *root)
{
    if(root == NULL){
        return;
    }
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        int n= q.size();
        for(int i=0;i<n;i++){
            Node* curr = q.front();
            q.pop();
        if(i == n-1)
            cout<<curr->data<<" ";
        
        if(curr->left != NULL)
            q.push(curr->left);
        
        if(curr->right != NULL )
            q.push(curr->right);
        }
    }
}
void leftview(Node *root)
{
    if(root == NULL){
        return;
    }
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        int n= q.size();
        for(int i=0;i<n;i++){
            Node* curr = q.front();
            q.pop();
        if(i == 0){
            cout<<curr->data<<" ";
        }
        if(curr->left != NULL){
            q.push(curr->left);
        }
        if(curr->right != NULL){
            q.push(curr->right);
        }
        
        }
    }
}
int main(){
Node *root = new Node(1);
root->left = new Node(2);
root->right = new Node(3);
root->left->left = new Node(4);
root->left->right = new Node(5);

root->right->left = new Node(6);
root->right->right = new Node(7);


Rightview(root);
cout<<endl;
leftview(root);
return 0;
}