#include <stdio.h>

int main() {
    char str_arr[100];
    scanf("%s", str_arr);
    
    int length = 0;
    while (str_arr[length] != '\0') {
        length++;
    }

    int first = 1; 
    for (int len = 1; len <= length; len++) {  
        for (int i = 0; i <= length - len; i++) {  
            if (first == 0) {
                printf(",");  
            }
            first = 0;
            for (int j = i; j < i + len; j++) {
                printf("%c", str_arr[j]);
            }
        }
    }

    return 0;
}
