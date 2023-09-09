#include <iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int data)
    {
        this->data=data;
        this->next=NULL;
    }
};
void print(node* &head)
{
    node* temp = head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }cout<<endl;
}

void insertbegin(node* &head,int data){
    node* temp = new node(data);
    temp->next = head;
    head = temp;
}


void insertend(node* &tail,int data)
{
    node* temp = new node(data);
    temp->next = NULL;
    tail = temp;
}

int main()
{
    node* node1 = new node(10);
    node* head = node1;
    node* tail = node1;
    insertbegin(head,5);
    insertend(tail,20);
    // insertpos(head,tail,5,15);
    print(head);
    // deletebegin(head);

    return 0;
}