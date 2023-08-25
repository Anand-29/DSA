#include<stdio.h>
int linearsearch(int a[],int n,int se){
    for(int i=0;i<n;i++){
        if(a[i]==se)
          return i;
    }
    return -1;
}
int main(){
    int n;
    printf("Enter the size of array:\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements of array\n");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter the search elements:\n");
    int se;
    scanf("%d",&se);
    int index=linearsearch(a,n,se);
    if(index==-1)
        printf("Element not found");
    else
        printf("Element fount at %d index",index);
}
