#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node*next;
};
struct node*head;
void insert(int new_int)  
{
    struct node*new_node=(struct node*)malloc(sizeof(struct node));
new_node->data=new_int;
new_node->next=head;
head=new_node;
}
void display()
{
    struct node*ptr;
    ptr=head;
    while(ptr !=NULL)
    {
        cout<<ptr->data<<endl;
        ptr=ptr->next;
    }
} 
int main()
{
    insert(6000);
    insert(4000);
    insert(2000);
    
    cout<<" linked list \n ";
    display();
    return 0;
}