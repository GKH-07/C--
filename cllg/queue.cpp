#include <iostream>

using namespace std;
class Node{
    public:
    int data;
    Node * next;
    Node(int val){
        data=val;
        next=NULL;
    }
};
class Queue{
    Node* front;
Node *rear;
    public:
    Queue(){
        front=rear=NULL;
    }
    bool isempty(){
        if(front==NULL){
            return true;
        }
        return false;
    }
    void enqueue(int val){
        Node * n=new Node(val);
        if(isempty()){
          
            front=n;
            rear=n;
            return;
        }
        rear->next=n;
        rear=rear->next;
    }
    void dequeue(){
        if(isempty()){
            cout<<"queue is empty";
            return;
        }
        Node * todel=front;
        front=front->next;
        delete todel;
        
    }
    
    int peek(){
        if(isempty()){
            cout<<"queue is empty";
            return -1;
            
        }
        return front->data;
    }
    
    void display(){
        if(isempty()){
            cout<<"queue is empty";
         return;
            
        }
        Node * temp=front;
        while(temp!=NULL){
            cout<<temp->data<<"-> ";
            temp=temp->next;
        }
    cout<<endl;
}
};

int main()
{
    Queue q;
      cout<<"\npeek   :  "<<q.peek()<<endl;
     q.enqueue(10);
     q.enqueue(20);
     q.enqueue(30);
      cout<<"peek   :  "<<q.peek()<<endl;
     q.display();
      cout<<"after deletion"<<endl;
     q.dequeue();
     q.display();
    return 0;
}