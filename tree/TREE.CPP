#include<bits/stdc++.h>
using namespace std;
class TreeNode{
    public:
    int data;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};
TreeNode* takeInput(TreeNode *root){
    int rootdata;
    cout<<" enter root data : "<<endl;
    cin >> rootdata; 
    TreeNode *root = new TreeNode(rootdata);
    queue<TreeNode*> q;
     q.push(root);
     while(q.size() != 0){
         TreeNode *curr = q.front();
         q.pop();
         cout<<"enter numner of child" << curr->data<<endl;
         int numchild;
         cin>>numchild;
         for(int i=0;i<numchild;i++)
         {
               int childdata;
                cout<<"enter "<<i<<"th child of"<<curr->data<<endl;
                cin>>childdata;
                TreeNode *child = new TreeNode(childdata); 
                curr->children.push_back(child);
                q.push(child);
         }

     }

}
void printTree(TreeNode* root){
    
    queue<TreeNode*> pendingNodes;
    pendingNodes.push(root);

    while(!pendingNodes.empty()){
        TreeNode* front=pendingNodes.front();
        pendingNodes.pop();
        cout<<front->data<<" : ";
        if(front->left!=NULL){
            cout<<"L -> "<<front->left->data;
            pendingNodes.push(front->left);
        }
        if(front->right!=NULL){
            cout<<"R -> "<<front->right->data;
            pendingNodes.push(front->right);
        }
        cout<<endl;
    }
}
int main(){

return 0;
}