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
void zigzag(Node* root){
    if(root == NULL){
        return;
    }
    stack<Node*> curr,next;
    bool leftToRight = true;
    curr.push(root);
    while (!curr.empty())
    {
        Node* temp = curr.top();
        curr.pop();

        if(temp)
        {
            cout<<temp->data<<" ";
        
            if(leftToRight)
            {
                if(temp->left != NULL){
                next.push(temp->left);
                }
                if(temp->right != NULL){
                next.push(temp->right);
                }
            }   
// if left to right is false means RIGHT SE LEFT TRAVERSAL KERNA HAI
            else
            {
                if(temp->right != NULL){
                next.push(temp->right);
                } 
                if(temp->left != NULL){
                next.push(temp->left);
                }          
            }
        } 
        if(curr.empty())
        {
            leftToRight = !leftToRight;// agr curr empty h matlab humne el level traversal ker li h aur ab hum leftTo right ko uska opposite bna denge
            swap(curr,next);
        }
    }
    
}
int main(){
Node *root = new Node(30);
root->left = new Node(20);
root->right = new Node(40);
root->left->left = new Node(10);
root->right->left = new Node(35);
root->right->right = new Node(50);
zigzag(root);
return 0;
}
/*
            30
            /\
          20  40
         /    / \
        10   35  50
*/