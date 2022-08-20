#include <iostream>
using namespace std;
class queue{
    int front,rear,q[5],n;
    public:
    void insert(void);
    void Delete(void);
    void Display(void);
    void getdata();
};
void queue::getdata()
{
    cout<<"enter size of the queue";
    cin>>n;
    front=0;
    rear=0;
}
void queue::insert(void)
{
    int item;
    if(rear==n)
    {
        cout<<"over flow";
    }
    else
    {
cout<<"enter an item that is to be inserted  :";
cin>>item;
if(front==0)
{
    rear=front=1;
}
else{
    rear=rear+1;
}
q[rear]=item;
    }
}
void queue::Delete(void)
{
int item;
if(front==0)
{
    cout<<"under flow\n";

}
else
{
    item=q[front];
    if(front==rear)
    {
        front=0;
        rear=0;
    }
    else
    {
        front=front+1;
    }
    cout<<"delete item is  :"<<item<<"\n";
}
}
void queue::Display(void)
{
    int i;
    if(front==0)
    {
        cout<<"sorry, queue is empty\n";
    }
    else
{
    cout<<" display the queue after operation  \n";
    for(i=front; i<=rear; i++)
    {
        cout<<q[i]<<"\n";
    }
}
}
int main(){
queue Q;
int opt;
Q.getdata();
do
{
    cout<<"\nQUEUE OPERATION:\n"<<"1.INSERT\n"<<"2.DELETE\n"<<"3.DISPLAY\n"<<"4.EXIT\n"<<endl;
cout<<"your choice please\n";
cin>>opt;
switch(opt)
{
    case 1:
    Q.insert();
    break;
    case 2:
    Q.Delete();
    break;
    case 3:
    Q.Display();
    break;
    case 4:exit(0);
    default:
    cout<<"error,wrong operation";
    break;
}
} 
while(opt<=4);

return 0;
}