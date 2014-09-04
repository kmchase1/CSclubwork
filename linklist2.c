#include<stdio.h>
#include<stdlib.h>
int Node;
struct Node {
int data;
struct Node* next; 
};
struct Node* head;
void Insert(int x)
{
  struct Node* temp = (Node*)malloc(sizeof(struct node));
  (*temp).data = x;
  (*temp).next = head;
  head = temp;

}
void Print(){
 struct  Node* temp = head;
 printf("List is: ");
 while(temp != NULL)
 {
   printf("%d",temp->data);
   temp= temp->next;
}
printf("\n");
int main(){
  head = NULL;
  printf("How many numbers?\n");
  int n,i,x;
  scanf("%d",&n);
for (i = 0;i<n;i++){
  printf("Put them in me!\n");
  scanf("%d",&x);
  Insert(x);
  Print(x);
  }
}
