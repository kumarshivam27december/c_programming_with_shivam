#include <bits/stdc++.h>
using namespace std;
class node{
  public:
  int data;
  node* next;
  node(int data){
    this->data=data;
    this->next = NULL;
  }
};
void insertAthead(node* &head,int data)
{
  node* temp = new node(data);
  temp->next = head;
  head = temp;
}
void print(node* &head) {  
  node *temp = head;  
  while (temp != nullptr) {  
    cout << temp->data << " ";  
    temp = temp->next;  
  }  
  cout << endl;  
}  
int main(){
  node* node1 = new node(10);
//   cout<<node1->data<<endl;
  node* head = node1;
  insertAthead(head,5);
  insertAthead(head,15);
  insertAthead(head,25);
  print(head);
return 0;
}
