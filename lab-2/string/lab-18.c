#include<stdio.h>
int main(){
    char str_arr[100];
    char g_char, r_char;
    fgets(str_arr,100,stdin);
    scanf("%c %c",&g_char,&r_char);
    int length = 0;
    while (str_arr[length]!='\0')
    {
        length++;
    }
    for(int i =0;i<length;i++){
        if(str_arr[i]!=g_char){
            printf("%c",str_arr[i]);
        }
        else{
            printf("%c",r_char);
        }
    }
    return 0;
}