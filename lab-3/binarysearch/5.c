#include <stdio.h>

int binarySearch(int arr[], int low, int high, int x)
{   int counter = 0;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == x)
            counter++;
            return counter+1;
        if (arr[mid] < x)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}

int main()
{
    int arr[] = { 2, 3, 3, 10, 40 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 3;
    int result = binarySearch(arr, 0, n - 1, x);
    if(result == -1){
        printf("Element is not present in array\n");
    }
    else{
        printf("Element is present for %d time/s\n",result);
    } 
    return 0;
}