#include<bits/stdc++.h>
using namespace std;
class queueUsingArray{
int frontIndex;
int nextIndex;
int *arr;
public:
int n=20; //size of array
queueUsingArray(){
    arr = new int[n];
    frontIndex = -1;
    nextIndex  = -1;
}
 void enqueue(int x){
     if(nextIndex == n-1){
         cout<<"queue is full (insert function)"<<endl;
     }
     nextIndex++;
     arr[nextIndex] = x;
     if(frontIndex == -1){
         frontIndex ++;
     }
 }
 void dequeue(){
    if(frontIndex > nextIndex || frontIndex == -1){
        cout<<" queue is empty (pop)"<<endl;
        return;
    }
     frontIndex++;
 }
 int peek(){
    if(frontIndex == -1 || frontIndex > nextIndex){
        cout<<"no element in queue(peek)"<<endl;
        return -1;
    }
     return arr[frontIndex];
 }
 int size(){
     return (nextIndex - frontIndex + 1);
 }
 void isEmpty(){
    if(frontIndex > nextIndex || frontIndex == -1){
        cout<<" queue is empty (pop)"<<endl;
    return;
    }
 }
};
int main(){
    queueUsingArray q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);
    q.enqueue(60);
    cout<<q.peek()<<" ";
    q.dequeue();
    cout<<q.peek()<<" ";
    q.dequeue();
    cout<<q.peek()<<" ";
    q.dequeue();
    cout<<q.peek()<<" ";
    q.dequeue();
    cout<<q.peek()<<" ";
    q.dequeue();
    cout<<q.peek()<<" ";
    q.dequeue();
    
    
return 0;
}