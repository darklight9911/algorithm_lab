#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 2, 2, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key = 2;
    int counter = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            counter++;
        }
    }
    printf("Count of %d is %d\n", key, counter);
    return 0;
}
