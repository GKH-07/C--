#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* next;

    node(int val){
        data =val;
        next = NULL;
    }
};
void insertATfirst(node* &head,int val){
        node* n = new node(val);
        n->next=head;
        head=n;
}
node* reverseKnodes(node* head,int k){
    node* prevptr = NULL;
    node* currptr = head;
    node* nextptr;

    int count =0;
    while (currptr !=NULL && count<k)
    {
        nextptr = currptr->next;
        currptr->next = prevptr;
        prevptr=currptr;
        currptr=nextptr;
        count++; 
    }
    if(nextptr !=NULL){
    head->next = reverseKnodes(nextptr,k);
    }   
    return prevptr;
}
void display(node* &head){
    node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"null"<<endl;
}
int main(){
    node* head = NULL;
    insertATfirst(head,6);
    insertATfirst(head,5);
    insertATfirst(head,4);
    insertATfirst(head,3);
    insertATfirst(head,2);
    insertATfirst(head,1);
    display(head);
    
    int k=4;
    node* newhead=reverseKnodes(head,k);
    display(newhead);
    
return 0;
}