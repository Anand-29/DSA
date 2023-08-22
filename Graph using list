#include <stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node * next;
};
struct Graph {
    int vertices;
    struct node ** adjlist;
  };
struct node * createnode(int d){
    struct node * newnode = malloc(sizeof(struct node));
    newnode -> data =d;
    newnode -> next=NULL;
    return newnode;
    }
struct Graph * creategraph(int v){
      struct Graph * graph = malloc(sizeof(struct Graph));
      graph -> vertices=v;
      graph -> adjlist=malloc( v * sizeof(struct node));
   for(int i=0; i<v; i++){
       graph -> adjlist[i]=NULL;
     }
     return graph;
}
    //node ->next = new node;
    //next -> newnode[s]
void add(int r, int c, struct Graph * graph){
      struct node * Newnode=createnode(c);
      Newnode -> next = graph -> adjlist[r];
      graph -> adjlist[r]= Newnode;
    }
void print(struct Graph * graph){
      for(int i=0; i<graph->vertices; i++){
        printf("%d -> ",i);//vertex number;
        struct node * temp =graph -> adjlist[i];
        while(temp!=NULL){
          printf("%d - ",temp-> data);
          temp=temp->next;
        }
        printf("\n");
      }
    }
int main(){
      struct Graph * graph= creategraph(4);
      add(0,1,graph);
      add(0,2,graph);
      add(0,3,graph);
      add(1,2,graph);
      print(graph);
      }
