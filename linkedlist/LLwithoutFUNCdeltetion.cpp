// deletion at the end............................................................
#include <iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
};

int main()
{
    node *root;
    node *last;
    node *current;
    root=new node;
    last=new node;
    current=new node;
    root->data=10;
    current->data=20;
    last->data=30;
    root->next=current;
    current->next=last;
        current=new node;
        current->data=40;
        last->next=current;
        last=current;
        current=new node;
        current->data = 50;
        last->next=current;
        last=current;

    // node *pop;
    // pop = root; 
    // while(pop->next->data!=20)
    // {
    //     pop=pop->next;
    // }
    // pop->next=NULL;
    node* pop;
    pop=root;
    while(pop->next->data!=50){
        pop=pop->next;
    }
    pop->next=NULL;
    
    node *red;
    red=root;
    while(red!=NULL)
    {
        cout<<red->data<<"->";
        red=red->next;
    }
    cout<<"NULL";
    return 0;
}
    
