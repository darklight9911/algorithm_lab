#include <stdio.h>

const char* ifExists(int arr[], int size, int key) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            return "YES";
        }
    }
    return "NO";
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key = 6;

    printf("Does %d exist? %s\n", key, ifExists(arr, size, key));
    return 0;
}
