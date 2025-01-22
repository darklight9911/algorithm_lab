#include<stdio.h>
int main(){
    char s_arr[100];
    scanf("%s",s_arr);
    int index;
    for(int  i = 0;s_arr[i] != '\0';i++){
        index = i;
    }
    for(int i = index; i>=0;i--){
        printf("%c",s_arr[i]);
    }
    return 0;
}