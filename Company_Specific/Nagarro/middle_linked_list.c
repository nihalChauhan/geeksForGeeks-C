#include <stdio.h>
#include <stdlib.h>

struct node{
  int d;
  struct node* next;
};

void push(struct node** head, int k);
void find_mid(struct node* head);

int main(){
  struct node* head = NULL;
  int n, k;
  scanf("%d", &n);
  for(int i=0; i<n; i++){
    scanf("%d", &k);
    push(&head, k);
  }
  find_mid(head);
  return 0;
}

void push(struct node** head, int k){
  struct node *new_n = (struct node*) malloc(sizeof(struct node));
  new_n->d = k;
  new_n->next = NULL;

  if((*head)==NULL){
    (*head)=new_n;
    return;
  }

  struct node *temp = (*head);
  while(temp->next!=NULL)
    temp=temp->next;
  temp->next = new_n;
}

void find_mid(struct node* head){
  struct node *fast = head;
  struct node *slow = head;

  while(fast!=NULL && fast->next!=NULL){
    slow=slow->next;
    fast=fast->next->next;
  }
  printf("%d\n", slow->d);
}
