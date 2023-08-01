#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
    struct node *prev;
};
struct node *head=NULL;
void insertatend(int d){
    struct node *nn=(struct node *)malloc(sizeof(struct node));
    nn->data=d;
    nn->next=NULL;
    nn->prev=NULL;
    if(head==NULL){
      head=nn;
    }
    else{
      struct node *t=head;
      while(t->next!=NULL){
        t=t->next;
      }
      t->next=nn;
      nn->prev=t;
    }
}
void insertstbegining(int d){
   struct node *nn=(struct node *)malloc(sizeof(struct node));
    nn->data=d;
    nn->next=head;
    nn->prev=NULL;
    head=nn;
}
void insertatmiddle(int d,int pos){
  struct node *nn=(struct node *)malloc(sizeof(struct node));
    nn->data=d;
   struct node *t1=head;
   struct node *t2=t1->next;
   while(pos>2){
     t1=t1->next;
     t2=t2->next;
     pos--;
   }
   t1->next=nn;
   nn->prev=t1;
   nn->next=t2;
   t2->prev=nn;
}
void deleteatbegining(){
  struct node *t1=head;
   struct node *t2=t1->next;
   head=t2;
   t2->prev=NULL;
   free(t1);
}
void deleteatend(){
  struct node *t1=head;
   struct node *t2=t1->next;
   while(t2->next!=NULL){
     t1=t1->next;
     t2=t2->next;
   }
   t1->next=NULL;
   free(t2);
}
void deleteatmiddle(int pos){
  struct node *t1=head;
   struct node *t2=t1->next;
   while(pos>3){
     t1=t1->next;
     t2=t2->next;
     pos--;
   }
   t1->next=t2->next;
   struct node *t3=t2->next;
   t3->prev=t1;
   free(t2);
}
void print(){
  struct node *t=head;
  while(t!=NULL){
    printf("%d",t->data);
    t=t->next;
  }
  printf("\n");
}
int main(){
   insertatend(1);
   insertatend(2);
   insertatend(3);
   insertatend(4);
   print();
   insertstbegining(5);
   print();
     insertatmiddle(6,3);
     print();
        deleteatbegining();
        print();
         deleteatend();
         print();
           deleteatmiddle(2);
           print();
}
  
