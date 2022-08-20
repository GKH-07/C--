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
//-------------------------------insertion function--------------------------------------------------
void insertATbegin(node* &head,int val){
    node* newnode = new node(val);
    node* temp = head;
    if(head == NULL){
        head = newnode;
        newnode -> next = newnode;
        return;
    }
        while(temp->next != head ){
        temp = temp->next;
    }
    temp->next = newnode;
    newnode->next = head;
    head = newnode;
}
//---------------------------------------deletion from ending----------------------------------------
void delFromaEND(node* &head){
    node* temp = head;
    node* tail;
    while (temp->next->next != head)
    {
        temp = temp->next;
    }
    tail = temp -> next; 
    temp-> next = head;
    tail->next = NULL;
    tail = temp;   
}
//---------------------------------------deletion from starting--------------------------------------
void delFromBegin(node* &head){
      node* temp = head;
      node* tail;
    while (temp->next->next != head)
    {
        temp = temp->next;
    }
    tail = temp -> next; 
    head = head->next;// now head is on second element 
    tail ->next = head;
    delete temp;

}
//-------------------------------------deletion at specific positon----------------------------------
void delFromSpecPos(node* &head,int pos){
    node* temp = head;
    
   for(int i = 0;i<pos-1;i++){
       temp = temp->next;
   }

   temp->next = temp->next->next;

}
//-----------------------------------------------display---------------------------------------------
void display(node* &head){
    node* temp = head;
    do{
        cout<<temp->data<<" -> ";
        temp = temp->next;
    }while(temp != head);
    cout<< " head ";
    cout<<endl;
}
int main(){
    node* head = NULL;
    insertATbegin(head,5);
    insertATbegin(head,4);
    insertATbegin(head,3);
    insertATbegin(head,2);
    insertATbegin(head,1);
    display(head);
    delFromaEND(head);
    display(head);
    delFromBegin(head);
    display(head);
    delFromSpecPos(head,2);
    display(head);
return 0;
}