

#include <stdio.h>
int n=4;
int a[4][4],visited[4];
int q[4],r=-1,f=0;
void insert(int v,int i){
    a[v][i]=1;
}
void bfs(int v){
    for(int i=0;i<n;i++){
        if(a[v][i]==1 && !visited[i]){
            q[++r]=i;
        }
    }
    while(f<=r){
      visited[q[f]]=1;
      bfs(q[f++]);
    }
}
int main()
{
    insert(0,1);
    insert(0,2);
    insert(0,3);
    insert(2,3);
     int vertex=0;
    bfs(vertex);
    printf("from %d vertex ",vertex);
    for(int i=0;i<n;i++){
      if(visited[i]==1)
        printf(" -> %d ",i);
    }
    return 0;
}
