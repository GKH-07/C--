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
int length(node* head){
    int l=0;
    node* temp = head;
    while(temp!=NULL){
        l++;
        temp=temp->next;
    }
    return l;
}
node* KappendNODE(node* &head,int k){
    node* newhead;
    node* newtail;
    node* tail = head;
    int l = length(head) ;
    k=k%l; //AGR K IS MORE THAN L
    // agr l length h aur k postion h to l-k nwetail hogi aur l-k+1 naya head hoga
    int count = 1;
    // tail as temp
    while(tail->next!=NULL){
        if(count==l-k){
            newtail=tail;
        }
        if(count == l-k+1){
            newhead = tail;
        }
        tail =tail->next;
        count++;
    }
    newtail->next=NULL;
    tail->next=head;
    return newhead;
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
        for(int i=1;i<=6;i++)
        insertAtTAIl(head,i);
    display(head);
    cout<<length(head)<<endl;
    node* newhead = KappendNODE(head,3);
    display(newhead);

return 0;
}