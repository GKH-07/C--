#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* next; // next node ko point ker rha h islye node type ka

    node(int val){
        data = val;
        next = NULL;
        }
};
void insertAtTAIl(node* &head,int val){
    node* n = new node(val);
    if(head==NULL){
        head=n;
        return;
    }
    node* temp = head;
    while (temp ->next != NULL)
    {
        temp = temp ->next;
    }
    temp->next=n;  
}
node* reverse(node* &head){
    node* prevptr=NULL;
    node* currptr=head;
    node* nextptr;

    while (currptr!=NULL)
    {
        nextptr=currptr->next;
        currptr->next=prevptr;
        prevptr=currptr;
        currptr=nextptr;
    }
    return prevptr;
}

void display(node* head){
    node* temp=head;
    while(temp !=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
int main(){

    node* head=NULL;
    insertAtTAIl(head,1);
    insertAtTAIl(head,2);
    insertAtTAIl(head,3);
    insertAtTAIl(head,4);
    display(head);
    node* newhead = reverse(head);
    display(newhead);

return 0;
}