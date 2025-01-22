#include<stdio.h>
int main(){
    char str_arr[100];
    fgets(str_arr,100,stdin);
    for(int i = 0; str_arr[i]!= '\0'; i++){
        if(str_arr[i]!= ' '){
            printf("%c",str_arr[i]);
        }
        else{
            continue;
        }
    }
    return 0;
}