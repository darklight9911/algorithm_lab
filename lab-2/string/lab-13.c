#include<stdio.h>
int main(){
    char str_arr[100];
    scanf("%s",str_arr);
    int length = 0,counter = 0;
    while(str_arr[length] != '\0'){
        if(str_arr[length]=='a' || str_arr[length]=='e' || str_arr[length]=='i' || str_arr[length]=='o'|| str_arr[length]=='u'){
            counter++;
        }
        length++;      
    }
    printf("Vowels:%d\n",counter);
    printf("Consonants:%d\n",length-counter);
    return 0;
}