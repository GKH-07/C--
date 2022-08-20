#include<iostream>
using namespace std;
class node{
	public:
		int data;
		node *prev;
		node *next;
};
node * start; // globly create kiya tha ek new node ko
void insertBegg(int d){
    node* temp = new node;
    //temp = new node;
    temp ->data=d;
    temp->prev=NULL;
    temp->next=start;
    if(start == NULL){
            start = temp;
    }
    else{
        start->prev=temp;
        temp->next=start;
        start=temp;
    }
}
void insertAtEnd(int d){
	node *temp,*q;
	temp=new node();
	temp->data=d;
	temp->prev=NULL;
	temp->next=NULL;
	if(start==NULL){
		start=temp;
	}
	else{
		q=start;
		while(q->next!=NULL){
			q=q->next;
		}
		q->next=temp;
		temp->prev=q;
	}
	
}  
void reversePrint(){
	node *temp,*q;
	q=start;
	while(q->next!=NULL){
		q=q->next;
	}
	temp=q;
	cout<<endl;
	while(temp!=NULL){
		
		cout<<temp->data<<"  <->  ";
		temp=temp->prev;
	}	
}
void deleteFromBegg(){
	if(start==NULL){
		cout<<"Linkedlist is empty"<<endl;
	}
	int temp=start->data;
	start=start->next;
	cout<<temp<<" node is deletd from beggining"<<endl;
}
void deleteFromEND(){
	if(start==NULL){
	cout<<"Linkedlist is empty"<<endl;
	}
	node *temp;
	temp=start;
	while(temp->next->next!=NULL){
		temp=temp->next;
	}
	int d=temp->next->data;
	temp->next=NULL;
	cout<<d<<" node is deletd from end"<<endl;
	
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
	insertBegg(1);
	insertBegg(2);
	insertBegg(3);
	insertBegg(4);
    insertAtEnd(5);
    print();
    deleteFromEND();
   // deleteFromBegg();
  
	print();
   // reversePrint();
}








