#include <stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node*next;
};
struct node*createnode(int data){
  struct node*newnode=(struct node*)malloc(sizeof(struct node));
  newnode->data=data;
  newnode->next=NULL;
  return newnode;
}
void insertatend(struct node**head,int data){
  struct node*newnode=createnode(data);
  if(*head==NULL){
    *head=newnode;
    return;
  }
  struct node*temp=*head;
  while(temp->next!=NULL){
    temp=temp->next;
  }
  temp->next=newnode;
}
void printlist(struct node*head){
  struct node*temp=head;
  while(temp!=NULL){
    printf("%d->",temp->data);
    temp=temp->next;
  }
  printf("NULL\n");
}
int main(){
  struct node*head=NULL;
  insertatend(&head,10);
  insertatend(&head,20);
  insertatend(&head,30);
  insertatend(&head,40);
  printf("Linked list:");
  printlist(head);
  return 0;
}


