#include<stdio.h>
int main(){
    char s_arr[100];
    scanf("%s",s_arr);
    int index;
    for(int  i = 0;s_arr[i] != '\0';i++){
        index = i;
    }
    for(int i = index, j=0; i>=0, j<= index;i--,j++){
        if(s_arr[i]==s_arr[j]){
            if((i==0) && (j == index)){
                printf("Yes,it's a palindrome.\n");
            }
            else{
                continue;
            }
        }
        else{
            printf("No,it's not a palindrome.\n");
        }     
    }
    return 0;
}