
#include <stdio.h>
int n=4;
int a[4][4],visited[4];
void insert(int v,int i){
    a[v][i]=1;
}
void dfs(int v){
    visited[v]=1;
    int i;
    for(i=0;i<n;i++){
        if(a[v][i]==1 && !visited[i]){
            printf("%d->%d\n",v,i);
            dfs(i);
        }
    }
}
int main()
{
    insert(0,1);
    insert(1,2);
    insert(2,3);
    insert(3,0);
    int vertex=0;
    dfs(vertex);
    return 0;
}
