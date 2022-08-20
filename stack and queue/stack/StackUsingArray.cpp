#include<bits/stdc++.h>
using namespace std;
class StackUsingArray
{
private:
    int *arr;
    int nextindex;
    int capacity;
public:
    StackUsingArray(int totalSize){
        arr = new int[totalSize];
        nextindex = 0;
        capacity  = totalSize; 
    }
    int size(){
        return nextindex;
    }
    bool isEmpty(){
        return nextindex == 0;
    }
    void push(int val){
        if(nextindex == capacity){
            cout<<"Stack is full"<<endl;
            return;
        }
        arr[nextindex] = val;
        nextindex++;
    }
    int pop(){
        if(isEmpty()){
            cout<<"stack is empty"<<endl;
            return -1;
        }
        nextindex--;
        return arr[nextindex];
    }
   int top(){
            if(isEmpty()){
            cout<<"stack is empty"<<endl;
            return -1;
        }
       return arr[nextindex - 1];
   }
};



int main(){
StackUsingArray s(5);
 s.push(10);
 s.push(20);
 s.push(30);
 s.push(40);
 s.push(50);
 //------------
 s.push(50);
 cout<<s.size()<<endl;
 s.top();
 cout<<s.pop()<<" ";
 s.top();
 cout<<s.pop()<<" ";
 s.top();
 cout<<s.pop()<<" ";
 s.top();
 cout<<s.pop()<<" ";
 s.top();
 cout<<s.pop()<<" ";
  cout<<"\n";
 // -----------
  s.top();
 //------------

return 0;
}