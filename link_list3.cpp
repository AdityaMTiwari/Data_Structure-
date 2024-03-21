#include <iostream>
using namespace std;
#include "linked_list1.cpp"
Node* takeinput(){
    int data;
    cin>>data;
    Node *head=NULL;
    Node *tail= NULL;
  while(data!= -1){
Node *newNode= new Node(data);
if(head==NULL){
    head=newNode;
    tail=newNode;
}
else{
    tail->next= newNode;
    tail=newNode;

/* Node *temp=head;
    while(temp->next!=NULL){
        temp=temp->next;*/
      
}
cin>>data;
  }
  return head;

}
Node* insertNode(Node *head, int i, int data){

  Node *newNode = new Node(data);

    Node *temp = head;
    int count = 0;
    if(i==0){
        newNode->next=head;
        head=newNode;
        return head;


    }
    while(temp!=NULL && count<=i){
        temp = temp->next;
        count++;
    }
    if(temp!=NULL){
    newNode->next=temp->next;
  temp->next=newNode;
    }
}
void print(Node *head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
}
int main(){
    Node *head=takeinput();
    print(head);
    int i,data;
    cin>>i>>data;
   head= insertNode(head,i,data);
    print(head);

}