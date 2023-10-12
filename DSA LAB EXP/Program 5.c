#include<stdio.h>

// Brute Force Approach to find largest rectangle area in Histogram
int min(int a,int b){
    if(a>b)
    return b;
    else
    return a;
}
int max(int a,int b){
    if(a>b)
    return a;
    else
    return b;
}
int largestarea(int arr[], int n) {
  int maxArea = 0;
  for (int i = 0; i < n; i++) {
    int minHeight = 99999999;
    for (int j = i; j < n; j++) {
      minHeight = min(minHeight, arr[j]);
      maxArea = max(maxArea, minHeight * (j - i + 1));
    }
  }
  return maxArea;
}
int main() {
  int arr[] = {2, 1, 5, 6, 2, 3, 1};
  int n = 7;
  printf("The largest area in the histogram is %d",largestarea(arr, n)); // Printing the largest rectangle area
  return 0;
}
