#include<stdio.h>
int binarysearch(int arr[], int start, int end, int se)
{
	int mid = start + (end - start) / 2;
    if (arr[mid] == se)
			return mid;
    if (arr[mid] > se)
			return binarysearch(arr, start, mid - 1, se);
    else if(arr[mid]<se)
		    return binarysearch(arr, mid + 1, end, se);
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
    int index=binarysearch(a,0,n-1,se);
    if(index==-1)
        printf("Element not found");
    else
        printf("Element fount at %d index",index);
}
