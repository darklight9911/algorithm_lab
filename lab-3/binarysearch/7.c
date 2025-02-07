#include <stdio.h>

int search(int arr[], int size, int key) {
    int low = 0, high = size - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == key) {
            return mid;
        }
        if (arr[low] <= arr[mid]) {
            if (arr[low] <= key && key < arr[mid]) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        else {
            if ( arr[high] >= key && key > arr[mid]) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
    }
    return -1;
}

int main() {
    int arr[] = {4, 5, 6, 7, 1, 2, 3};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key = 2;

    int result = search(arr, size, key);

    if (result != -1) {
        printf("%d found at index %d\n", key, result);
    } else {
        printf("%d not found in the array\n", key);
    }

    return 0;
}
