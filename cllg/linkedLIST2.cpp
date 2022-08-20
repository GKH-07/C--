#include <iostream>
using namespace std;
struct Node {
    int data;
    struct Node* next;
    struct Node* prev;
};

void insertFront(struct Node**head, int newData){
    struct Node*newNode = new Node;
    
    newNode->data = newData;
    
    newNode->next = (*head);
    newNode->prev = NULL;
    
    if((*head)!=NULL)
        (*head)->prev = newNode;
        
        (*head) = newNode;
    
}

void display(struct Node* node){
    struct Node* last;
    
    while(node!=NULL){
        cout<<node->data<<"<==>";
        last=node;
        node=node->next;
    }
    if(node==NULL)
    cout<<"NULL";
}

int main()
{
    struct Node* head = NULL;
    insertFront(&head,1);
    insertFront(&head,2);
    insertFront(&head,3);
    
    display(head);

    return 0;
}