#include <stdio.h>
int n=5;
int a[5][5];
void insert(int v,int e){
    a[v][e]=1;
}
void print(){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    insert(0,1);
    insert(0,2);
    insert(1,3);
    insert(4,3);
    insert(4,2);
    insert(4,1);
    print();
    return 0;
}
