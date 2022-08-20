#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node *next;
    node(int val){
        data = val;
        next =NULL;
    }
};
class queueLL{
   node * head;
   node * tail;
   int size;
   public:
        queueLL(){
            head = NULL;
            tail = NULL;
            size = 0;
        }
    int getsize(){
        return size;
    }
    bool isEmpty(){
        return size == 0;
    }
    void enqueue(int element){
        node *newnode = new node(element);
        if(head == NULL){
            head = newnode;
            tail = newnode;
            return;
        }
        tail -> next = newnode;
        tail = newnode;
        size++;
    }
    int front(){
        if(isEmpty()){
            return 0;
        }
        return head -> data;
    }
    int dequeue(){
        if(isEmpty()){
           return 0;
        }
        int answer = head -> data;
        node *temp = head;     
        head = head->next;
        delete temp;
        size--;
        return answer;
    }
 };
int main(){
    queueLL q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);
    q.enqueue(60);
    q.enqueue(70);
    

    cout<<q.front()<<" ";
    cout<<q.dequeue()<<endl;
    cout<<q.front()<<" ";
    cout<<q.dequeue()<<endl;
    cout<<q.front()<<" ";
    cout<<q.dequeue()<<endl;
  
    cout<< q.getsize()<<endl;
    cout<< q.isEmpty()<<endl;
    
}