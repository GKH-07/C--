#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* next;
};
int main(){
    node* root;
    node* last;
    node* current;
root = new node;
last = new node;
current =new node;
root -> data = 10;
last -> data = 30;
current -> data = 20;
root->next = current;
current->next = last;
last->next = NULL;

    current=new node;
    current->data=40;
    last->next=current;
    last=current;
    last->next = NULL;

    current = new node;
    current ->data=50;
    last->next = current;
    last =current;
    last -> next =NULL;
node* head;
head = root;
// search code.......................................................
node* search;
search = root;
while(search->next->data != 40){
    search=search->next;
}
cout<<search->next->data<<",elemet found";


// while(head != NULL){
//     cout<<head->data<<"->";
//     head=head->next;
// }
// cout<<"Null";
return 0;
}