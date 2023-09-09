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
    node* node2 = new node(data);
    node2->next = head;
    head = node2;
}


void insertAtTail(node* &tail,int data)
{
node* temp = new node(data);
tail->next = temp;
tail = temp;

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


int main()
{
    node* node1 = new node(10);
    // cout<<node1->data<<" ";
    node* head = node1;
    node* tail = node1;

    // insertAtHead(head,5);
    // insertAtHead(head,15);
    // insertAtHead(head,25);
    // insertAtHead(head,35);
    // insertAtHead(head,45);

    insertAtTail(tail,5);
    insertAtTail(tail,15);
    insertAtTail(tail,25);
    insertAtTail(tail,35);
    insertAtTail(tail,45);
    //traversing the list
    print(head);


    return 0;
}