#include <iostream>
#define SIZE 7

using namespace std;

class Queue{
    private:
    int items[SIZE],front,rear;
    
    public:
    Queue(){
        front =-1;
        rear=-1;
    }
    bool isFull()
    {
        if(front==0 && rear == SIZE-1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    bool isEmpty()
    {
        if(front == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    void enQueue(int element)
    {
        if(isFull())
        {
            cout<<"\nThe Queue is full... Kal aana";
        }
        else
        {
            if(front == -1)
            {
                front=0;
            }
                rear++;
                items[rear] = element;
                cout<<"\nDaal diye element... khush reh";
        }
    }
    void Print()
    {
        cout<<"\nYour Elements are: ";
        for(int index=0;index<SIZE;index++)
        {
            cout<<items[index]<<" - ";
        }
    }
};

int main()
{
    Queue Q1;
    Q1.enQueue(5);
    Q1.enQueue(12);
    Q1.enQueue(9);
    Q1.enQueue(78);
    Q1.enQueue(69);
    Q1.enQueue(22);
    
    Q1.Print();
    return 0;
}