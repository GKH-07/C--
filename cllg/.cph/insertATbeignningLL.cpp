#include <iostream>
using namespace std;

struct node{
public:
    int data;
    struct node *next;
};
void LinkedListTraversal(struct node* ptr){
    while(ptr!=NULL){
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
}
node* InsertAtFirst(struct node* head, int data){
    struct node* ptr = (struct node*)malloc(sizeof(struct node));
    ptr->next=head;
    ptr->data=data;
    return ptr;
}

int main()
{
    struct node* head;
    struct node* second;
    struct node* third;
    struct node* first;

    head =(struct node*)malloc(sizeof(struct node));
    second =(struct node*)malloc(sizeof(struct node));
    third =(struct node*)malloc(sizeof(struct node));
    first =(struct node*)malloc(sizeof(struct node));

    head->data=7;
    head->next=second;

    second->data =11;
    second->next = third;

    third->data =13;
    third->next=NULL;
    LinkedListTraversal(head);
    
    cout<<endl;

    first = InsertAtFirst(head,56);
    LinkedListTraversal(first);
    return 0;
}