#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* next;
};
int main(){
    node* first;
    node* second;
    node* third;
    first = new node;
    second = new node;
    third = new node;
    first -> data =10;
    second-> data =20;
    third -> data =30;
    first -> next =second;
    second -> next =third;
    third->next =NULL;
    node *head;
    head = first;
    while(head != NULL){
        cout<<head->data<<"->";
        head = head->next;
    }
    cout<<"NULL";

return 0;
}