#include<bits/stdc++.h>
using namespace std;
class treenode{
public:
int data;
treenode *left,*right;
    treenode(int val)
    {
        data = val;
        left =  NULL;
        right = NULL;
    }
};

void printLevelOrder(treenode *root){
    if(root == NULL){
        return;
    }
    queue<treenode*> q;
    q.push(root);                   //  queue me sabse pehle root aaega phir null --> ROOT , NULL,      Q --> 1,NULL
    q.push(NULL);
    while(!q.empty()){
        treenode *node = q.front(); //  ab ek nae node me queue ka top element daal denge --> node = ROOT
        q.pop();                    //  front ki value node me h aur usko ab queue se pop ker denge .   Q --> NULL
        if(node != NULL)             // node me abhi 1 hai
        {
            cout<<node->data<<" ";   //      1 will be printed
            if(node->left)           //  it means ki kya node ka left null h ya nhi,node ke left me 2 h 
            {
                q.push(node->left);  //                                                                 Q --> NULL,2
            }
            if(node->right)
            {
                q.push(node->right); //                                                                 Q --> NULL,2,3
            }
        }                                           // AB WHILE LOOP DOOBARA CHALEGA
        else if(!q.empty()){
            q.push(NULL);// agr node me NULL h pr abhi queue empty nhi h ,means abhi sirf ek level puri hui h aur abhi aur element h queue me
            cout<<endl;
        }
    }
}




int main(){
treenode *root = new treenode(1);

root->left = new treenode(2);
root->right = new treenode(3);

root->left->left = new treenode(4);
root->left->right = new treenode(5);

root->right->left = new treenode(6);
root->right->right = new treenode(7);
printLevelOrder(root);
return 0;
}