#include <stdio.h>

void findFirstAndLast(int arr[], int size, int key) {
    int first = -1, last = -1;
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            if (first == -1) {
                first = i;
            }
            last = i;
        }
    }
    printf("First position: %d, Last position: %d\n", first, last);
}

int main() {
    int arr[] = {1, 2, 3, 2, 4, 2};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key = 2;

    findFirstAndLast(arr, size, key);
    return 0;
}
