#include <stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *head=NULL;
void insert(int d){
    struct node *nn=(struct node *)malloc(sizeof(struct node));
    nn->data=d;
    nn->next=NULL;
    if(head==NULL){
        head=nn;
    }
    else{
        struct node *t=head;
        while(t->next!=NULL){
            t=t->next;
        }
        t->next=nn;
    }
}
void insertfront(int d){
    struct node *nn=(struct node*)malloc(sizeof(struct node));
    nn->data=d;
    nn->next=head;
    head=nn;
}
void insertmiddle(int d,int pos){
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
    nn->next=t2;
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
    insert(1);
    insert(2);
    insert(3);
    print();
    insertfront(4);
    print();
    insertmiddle(5,3);
    print();
}
