#include <stdio.h>

int findMajorityElement(int arr[], int size) {
    int count = 0, number = -1;
    for (int i = 0; i < size; i++) {
        if (count == 0) {
            number = arr[i];
            count = 1;
        } else if (arr[i] == number) {
            count++;
        } else {
            count--;
        }
    }
    count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] == number) {
            count++;
        }
    }
    if (count > size / 2) {
        return number;
    } else {
        return -1;
    }
}

int main() {
    int arr[] = {2, 2, 1, 2, 3, 2, 2};
    int size = sizeof(arr) / sizeof(arr[0]);

    int majority = findMajorityElement(arr, size);
    if (majority != -1) {
        printf("Majority element: %d\n", majority);
    } else {
        printf("No majority element found\n");
    }
    return 0;
}
