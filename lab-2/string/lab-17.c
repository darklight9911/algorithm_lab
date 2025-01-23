#include<stdio.h>
int main(){
    char arr_1[200];
    char arr_2[200];
    scanf("%s %s",arr_1,arr_2);
    int length = 0;
    while (arr_1[length]!= '\0')
    {
        length++;
    }
    int counter = 0;
    for(int i = 0; i<length;i++){
        for(int j= 0;j<length;j++){
            if(arr_1[i] == arr_2[j]){
                // printf("%d, %c\n",counter,arr_2[j]);
                counter++;
                break;
            }
            else{continue;}
        }
    }
    // printf("%d\n",counter);
    if(counter==length){
        printf("Yes,they are anagrams.\n");
    }
    else{
       printf("No,they are not anagrams.\n"); 
    }
    return 0;
}