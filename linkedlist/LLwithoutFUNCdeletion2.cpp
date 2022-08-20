#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* next;
};
int main(){
    node* first;
    node* current;
    node* last;
    first = new node;
    current = new node;
    last = new node;
    first->data=1;
    current->data=2;
    last->data=3;
    first->next = current;
    current->next =last;
    last->next=NULL;

    current=new node;
    current ->data=4;
    last ->next =current;
    last=current;
    last->next=NULL;
    current=new node;
    current ->data=5;
    last ->next =current;
    last=current;
    last->next=NULL;
    // deleting a specific element
    node* pop;
    pop = first;
    while(pop->next->data != 3){
            pop=pop->next;
    }
    pop->next=pop->next->next;


    node* head;
    head=first;
    while(head != NULL){
        cout<<head->data<<"->";
        head=head->next;
    }
    cout<<"NULL";
return 0;
}