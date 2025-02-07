#include <stdio.h>


int findFirstPosition(int arr[], int size, int key) {
    int low = 0, high = size - 1;
    int result = -1; 

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == key) {
            result = mid; 
            high = mid - 1; 
        } else if (arr[mid] < key) {
            low = mid + 1; 
        } else {
            high = mid - 1; 
        }
    }

    return result;
}

int main() {
    int arr[] = {1, 2, 2, 2, 3, 4, 5}; 
    int size = sizeof(arr) / sizeof(arr[0]);
    int key = 2; 

    int position = findFirstPosition(arr, size, key);

    if (position != -1) {
        printf("The first position of %d is: %d\n", key, position);
    } else {
        printf("The number %d is not present in the array.\n", key);
    }

    return 0;
}
