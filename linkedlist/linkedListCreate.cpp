#include<bits/stdc++.h>
using namespace std;
// node default data type nhi h isliye usko define kerna pedta h 
class node{
    public:
    int data;
    node* next; // next node ko point ker rha h islye node type ka

    node(int val){
        data = val;
        next = NULL;
        }
};
// starting me insert kerne ke liye 
void insertATHEAD(node* &head,int val){
    node* n = new node(val);
    n->next = head;
    head = n;

}
// last element pe insert kerne ke liye
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
// search in linked list
bool seearch(node* head,int key){
    node* temp = head;
    while(temp!=NULL){
        if(temp->data == key){
            return true;
        }
        temp=temp->next;
    }
    return false; 
}
// first element delete kerne ke liye 
void deleteAtHead(node* &head){
    node* todelete=head;
    head=head->next;
    delete todelete;
}
// piche se delete kerne ke liye
void deletion(node* &head,int val){
    if(head == NULL){
        cout<<"linked list is empty ";
    }
    if(head->next == NULL){
        deleteAtHead(head);
        return;
    }
    node* temp = head;

    while(temp ->next->data!=val){
        temp=temp->next;
    }
    node* todelete = temp->next;
    temp->next=temp->next->next;// n-1 ko sidha n+1 wle se connect kera diya
    delete todelete;
}
// function to display linked list
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
    insertATHEAD(head,3);
    // insertAtTAIl(head,1);
    // insertAtTAIl(head,2);
    // insertAtTAIl(head,3);
    //insertATHEAD(head,4);
    display(head);
   // cout<<"search : "<<seearch(head,3)<<endl;
    //deletion(head,2);
   // deleteAtHead(head);
  //  deletion(head,2);
//display(head);
return 0;
}