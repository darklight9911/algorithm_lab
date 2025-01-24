#include<stdio.h>
int main(){
    char str_arr[200];
    scanf("%s",str_arr);
    int length = 0;
    int arr[200];
    while(str_arr[length]!='\0'){length++;}
    // printf("len:%d",length);
    for(int i = 0;i<length;i++){
        arr[i] = 0;
    }
    for(int i =0;i<length;i++){
        if(arr[i]==0){
            int counter=1;
            for(int j =i+1;j<length;j++){
                if(str_arr[i]==str_arr[j]){
                    counter++;
                    arr[j]=-1;
                }
                // else{
                //     continue;
                // }
            }
            arr[i]=counter;
        }
    }
    // printf("count:%d\n",counter);
    for(int i = 0;i<length;i++){
        if(arr[i]>0){
            printf("%c:%d\n",str_arr[i],arr[i]);
        }
        // else{continue;}
    }
    return 0;
}