//Prim's Algorthim:-
#include <stdio.h>
#define MIN 99999
int n=4;
int a[4][4],visited[4];
void insert(int v,int i,int weight){
    a[v][i]=weight;
    a[i][v]=weight;
}
void PrimsAlgo(int V){
    int edge=0;
    int x;
    int y;
    int min;
    int visited[V];
    visited[0]=1;
    printf("Minimum spanning tree:-\n");
    while(edge<V-1){
        int min=MIN;
        x=0;
        y=0;
        for(int i=0;i<V;i++){
            if(visited[i]==1){
                for(int j=0;j<V;j++){
                    if(visited[j]==0 && a[i][j]!=0){
                        if(min>a[i][j]){
                            min=a[i][j];
                            x=i;
                            y=j;
                        }
                    }
                }
            }
        }
        printf("%d - %d -> %d \n",x,y,a[x][y]);
        visited[y]=1;
        edge++;
    }
    
}
int main()
{
    insert(0,1,10);
    insert(1,2,20);
    insert(2,3,5);
    insert(3,0,2);
    insert(0,2,21);
    insert(0,3,1);
    int vertex=4;
    PrimsAlgo(vertex);
    return 0;
}
