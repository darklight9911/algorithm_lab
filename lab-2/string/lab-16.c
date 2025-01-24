#include<stdio.h>
int main(){
    char string_1[300];
    fgets(string_1, 300, stdin);
    int counter = 0,length = 0,left=0;
    // int arr[100];
    while(string_1[length] != '\n'&& string_1[length] != '\0'){length++;}
    if (string_1[length] == '\n') {string_1[length] == '\0';}
    int max_len = 0, max_ind = 0;
    for(int  i = 0;i <= length;i++){
        if(string_1[i] == ' '||i== length|| string_1[i] == '\0' ){
            int w_len = i - left;
            // arr[counter++] = w_len;
            if(w_len>=max_len){
                max_len = w_len;
                max_ind = left;
            }
            left = i + 1;
        }
    }
    for(int i = max_ind; i<(max_ind+max_len);i++){
        printf("%c",string_1[i]);
    }
    printf("\n");
    return 0;
}