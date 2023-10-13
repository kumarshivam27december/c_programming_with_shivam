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
void insertathead(node* &head,int data)
{
	//temp node
	node* temp = new node(data);
	temp->next=head;
	head=temp;
}

void insertattail(node* &tail,int data)
{
	
	node* temp = new node(data);
	tail->next=temp;
	tail=temp;
}

void insertatposition(node* &head,int position,int data){
	node* temp = head;
	int cnt = 1;
	while(cnt<position-1)
	{
		temp=temp->next;
		cnt++;
	}	
	
	node* nodetoinsert =  new node(data);
	nodetoinsert->next=temp->next;
	temp->next=nodetoinsert;
}
void print(node* &head)
{
	node* temp = head;
	while(temp!=NULL)
	{
		cout<<temp->data<<" ";
		temp=temp->next;
	}cout<<endl;
}
int main(){
	
	node* node1 = new node(10);
	cout<<node1->data<<endl;
	node* head = node1;
	node* tail = node1;
	insertathead(head,15);
	insertathead(head,20);
	insertathead(head,30);
	insertathead(head,40);
	insertathead(head,50);
	insertathead(head,60);
	cout<<endl<<endl<<endl;
	
	insertattail(tail,70);
	insertattail(tail,80);
	insertattail(tail,90);
	insertatposition(head,3,100);
	print(head);
	
	return 0;
}
