#include<stdio.h>
void bubblesort(int *a,int *n){
    for(int i=0;i<*n;i++){
        for(int j=0;j<*n;j++){
            if(a[i]<a[j]){       //swap
                a[i]=a[i]+a[j];
                a[j]=a[i]-a[j];
                a[i]=a[i]-a[j];
            }
        }
    }
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
    bubblesort(a,&n);
    for(int i=0;i<n;i++){
        printf("%d",a[i]);
    }
}
