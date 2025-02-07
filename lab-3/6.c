#include <stdio.h>

int findSmallest(int arr[], int size, int X) {
    int low = 0, high = size - 1;
    int result = -1; 
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] > X) {
            result = arr[mid]; 
            high = mid - 1;    
        } else {
            low = mid + 1; 
        }
    }
    return result;
}

int main() {
    int arr[] = {1, 3, 5, 7, 9}; 
    int size = sizeof(arr) / sizeof(arr[0]);
    int X = 5; 
    int result = findSmallest(arr, size, X);
    if (result != -1) {
        printf("The smallest number greater than %d is: %d\n", X, result);
    } else {
        printf("No number greater than %d exists in the array.\n", X);
    }
    return 0;
}
