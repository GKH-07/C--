#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node *next;
    node(int val){
        data = val;
        next = NULL;
    }
};
//----------------------------------------------INSERTION AT BEGINNING-------------------------------------
void insertATbegin(node* &head,int val){
    node* newnode = new node(val);
    node *temp = head;
    if(head == NULL){
        head = newnode;
        newnode->next = newnode;
        return;
    }
    while(temp->next != head ){
        temp = temp->next;
    }
    temp->next = newnode;
    newnode->next = head;
    head = newnode;
}
//---------------------------------------------INSERTION AT TAIL---------------------------------------------
void insertAtEND(node* &head,int val){
    node* newnode = new node(val);
    node* temp = head;
    if(head == NULL){
      head = newnode;
        return;
    }
      while(temp->next != head ){
        temp = temp->next;
    }
    temp->next = newnode;
    newnode->next = head; 
}
void insertATspecificPOSITION(node* &head,int val,int pos){
    //------------------------------ZERO BASED INDEXING WILL BE USED IN LNKED LIST-----
    // second postion means --->> 0 1 newnode 3(prev ki 2nd postion wala) 4(prev ki third pos wla)-----------
    node* newnode = new node(val);
    node* temp = head;
    for(int i=0;i<pos-1;i++){
     temp = temp->next;
    }
    newnode->next=temp->next;
    temp->next = newnode;
}
//------------------------------------------------DISPLAY------------------------------------------------------
void display(node*head){
    node* temp = head;
                while(temp->next != head){
                 cout<<temp->data<<" -> ";
                 temp = temp->next;
                 }
                 cout<<temp->data<<"->";
                 //-- for last element-(kyuki last node pe honge to loop breal ho jaega)---------
                 cout<<endl; 
//     do{
//     cout<<temp->data<<"->";
//     temp=temp->next;
// }while(temp != head);
}
// // aur hum do while use ler sekte h

int main(){
node* head = NULL;
insertATbegin(head,3);
insertATbegin(head,2);
insertATbegin(head,1);
insertAtEND(head,4);
display(head);
insertATspecificPOSITION(head,5,2);
display(head);
return 0;
}

