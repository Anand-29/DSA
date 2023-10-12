
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct Interval {
    int s, e;
} Interval;

// Function used in sort
int mycomp(const void* a, const void* b)
{
    Interval* data_1 = (Interval*)a;
    Interval* data_2 = (Interval*)b;
    return (data_1->s - data_2->s);
}

// Find maximum between two numbers.
int max(int num1, int num2)
{
    return (num1 > num2) ? num1 : num2;
}

void mergeIntervals(Interval arr[], int n)
{
    // Sort Intervals in increasing order of
    // start time
    qsort(arr, n, sizeof(Interval), mycomp);

    int index = 0; // Stores index of last element
    // in output array (modified arr[])

    // Traverse all input Intervals
    for (int i = 1; i < n; i++) {
        // If this is not first Interval and overlaps
        // with the previous one
        if (arr[index].e >= arr[i].s) {
            // Merge previous and current Intervals
            arr[index].e = max(arr[index].e, arr[i].e);
        }
        else {
            index++;
            arr[index] = arr[i];
        }
    }

    // Now arr[0..index-1] stores the merged Intervals
    printf("\n The Merged Intervals are: ");
    for (int i = 0; i <= index; i++)
        printf("[%d, %d]", arr[i].s, arr[i].e);
}

// Driver program
int main()
{
    Interval arr[]
        = { { 6, 8 }, { 1, 9 }, { 2, 4 }, { 4, 7 } };
    int n = sizeof(arr) / sizeof(arr[0]);
    mergeIntervals(arr, n);
    return 0;
}
