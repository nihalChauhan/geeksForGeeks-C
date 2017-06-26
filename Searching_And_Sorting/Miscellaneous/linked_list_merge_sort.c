#include <stdio.h>
#include <stdlib.h>

struct Node{
  int data;
  struct Node* next;
};

void mergeSort(struct Node** head);
struct Node* sortedMerge(struct Node* a, struct Node* b);
void splitList(struct Node* head, struct Node** a, struct Node** b);
void push(struct Node** head, int d);
void printList(struct Node* head);


int main(){
  struct Node* head = NULL;
  int n, i, x;
  //Enter Number of Elements
  scanf("%d", &n);

  //Enter Elements
  for(i=0;i<n;i++){
    scanf("%d", &x);
    push(&head, x);
  }

  mergeSort(&head);

  printf("Sorted List :");
	printList(head);
  return 0;
}

void push(struct Node** head, int d){
  struct Node* a = (struct Node*) malloc(sizeof(struct Node));
  a->data = d;
  a->next = (*head);
  (*head) = a;
}

void printList(struct Node* head){
  while(head!=NULL){
    printf(" %d", head->data);
    head = head->next;
  }
}

void splitList(struct Node* head, struct Node** a, struct Node** b){
  struct Node *two;
  struct Node *one;
  if(head == NULL || head->next == NULL){
    *a = head;
    *b = NULL;
    return;
  }
  one = head;
  two = head->next;
  while(two != NULL){
    two = two->next;
    if(two != NULL){
      one = one->next;
      two = two->next;
    }
  }
  *a = head;
  *b = one->next;
  one->next = NULL;
}

struct Node* sortedMerge(struct Node* a, struct Node* b){
  struct Node* output = NULL;

  if(a == NULL)
    return b;
  else if(b == NULL)
    return a;

  if(a->data <= b->data){
    output = a;
    output->next = sortedMerge(a->next, b);
  }
  else{
    output = b;
    output->next = sortedMerge(a, b->next);
  }
  return output;
}

void mergeSort(struct Node** head){
  struct Node* ref = *head;
  struct Node* a;
  struct Node* b;

  if(ref == NULL || ref->next == NULL)
    return;

  splitList(ref, &a, &b);

  mergeSort(&a);
  mergeSort(&b);

  *head = sortedMerge(a,b);
}
