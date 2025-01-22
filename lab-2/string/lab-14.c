#include<stdio.h>
int main(){
    char str_srr[100];
    char str_srr_2[100];
    scanf("%s",str_srr);
    int counter =0;
    for(int i = 0; str_srr[i]!='\0'; i++){
        for(int j =i+1;str_srr[j]!='\0';j++){
            if(str_srr[i]==str_srr[j]){
                str_srr_2[counter]=str_srr[j];
                counter++;
                break;
            }
            else{
                continue;
            }
        }
    }
    for(int i =0;i< counter;i++){
        printf("%c",str_srr_2[i]);
        if(i != counter-1){
            printf(",");
        }
        else{
            continue;
        }
    }
    return 0;
}