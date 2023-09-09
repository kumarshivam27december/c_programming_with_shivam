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
void insertAtHead(node* &head,int data)
{
    node* temp = new node(data);
    temp->next = head;
    head = temp;
}

void insertAtTail(node* &tail,int data)
{
    node* temp = new node(data);
    tail->next=temp;
    tail=temp;
}
void print(node* &head)
{
    node* temp = head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }cout<<endl;
}

void insertAtPosition(node* &head,node* &tail,int pos,int data)
{

    if (pos==1)
    {
       insertAtHead(head,data);
       return;
    }

    node* temp = head;
    int count = 1;
    while(count<pos-1)
    {
        temp = temp->next;
        count++;
    }

    //insert at last position 
    if(temp->next==NULL)
    {
        insertAtTail(tail,data);
    }

    node* nodetoinsert = new node(data);
    nodetoinsert->next = temp->next;
    temp->next=nodetoinsert;

}
int main()
{
    node* node1 = new node(10);
    node* head = node1;
    node* tail = node1;
    insertAtHead(head,5);
    insertAtTail(tail,20);
    insertAtPosition(head,tail,3,15);
    print(head);
    return 0;
}