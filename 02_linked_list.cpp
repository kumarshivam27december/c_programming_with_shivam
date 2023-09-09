void Addtolast(int data){
Node* temp=new Node(data);
if(this->next==NULL){
this->next=temp;
}
else{
Node* current=this->next;
while (current!=NULL)
{
/* code */
current=current->next;
}
temp=current->next;
}
}