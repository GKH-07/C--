#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int val){
        data = val;
        next = NULL;
    }
};
void insertAThead(node* &head,int val){
    node* n = new node(val);
    n->next = head;
    head = n;
}
void makeCyCLE(node* &head,int pos){
    node* temp=head;
    node* startNode;

    int count =1;
    while(temp->next != NULL){
        if(count==pos){
            startNode=temp;
        }
        temp=temp->next;
        count++;
    }
    temp->next=startNode;
}
bool detectCycle(node* &head){
    node* slow=head;
    node* fast=head;
    while(fast != NULL && fast->next != NULL){// humme fast ko step chalna h isliye fast ka next bhi check kiya....
        slow=slow->next;
        fast=fast->next->next;

        if(fast == slow){
            return true;
        }
    }
    return false;
}
void display(node* head){
    node* temp =head;
    while (temp != NULL)
    {
      cout<<temp->data<<"->";
      temp=temp->next;
    }
    cout<<"null"<<endl;
}
void removeCycle(node* &head){
    node* slow=head;
    node* fast=head;
    do{
        slow=slow->next;
        fast=fast->next->next;
    }
    while(slow != fast);
    fast = head;
    while(slow->next != fast->next){
        slow=slow->next;
        fast=fast->next;
    }
    slow->next=NULL;
}
int main(){
    node* head=NULL;
    insertAThead(head,1);
    insertAThead(head,2);
    insertAThead(head,3);
    insertAThead(head,4);
    insertAThead(head,5);
    insertAThead(head,6);
    makeCyCLE(head,3);
   // display(head);
    cout<<detectCycle(head)<<endl;
    removeCycle(head);
    cout<<detectCycle(head)<<endl;
    display(head);
return 0;
}