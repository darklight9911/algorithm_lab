#include <stdio.h>

int findsec_largest(int arr[], int size) {
    int largest = 0, sec_largest = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i] > largest) {
            sec_largest = largest;
            largest = arr[i];
        } else if (arr[i] > sec_largest && arr[i] != largest) {
            sec_largest = arr[i];
        }
    }

    if (sec_largest == 0) {
        return -1;
    }
    return sec_largest;
}

int main() {
    int arr[] = {1, 2, 10, 3, 4, 5,7};
    int size = sizeof(arr) / sizeof(arr[0]);

    int sec_largest = findsec_largest(arr, size);
    printf("Second largest number: %d\n", sec_largest);
    return 0;
}

