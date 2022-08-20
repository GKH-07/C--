#include<iostream>
using namespace std;
class node{
	public:
		int data;
		node *prev;
		node *next;
};
node * start;
void insertBegg(int d){
    node* temp;
    temp = new node;
    temp ->data=d;
    temp->prev=NULL;
    temp->next=start;
    if(start ==NULL){
            start = temp;
    }
    else{
        start->prev=temp;
        temp->next=start;
        start=temp;
    }
}

void print(){
	node *temp;
	temp=start;
		while(temp!=NULL){
		cout<<temp->data<<"  <-> ";
		temp=temp->next;
	}
    cout<<"NULL";
	cout<<endl;
}
int main(){
    node* head;
    head = new node;
	insertBegg(1);
	insertBegg(2);
	insertBegg(3);
	insertBegg(4);
    print();
}

