#include<stdio.h>
int main(){
    char string_1[300];
    fgets(string_1, 300, stdin);
    int counter = 0,length = 0,count = 1,left;
    int arr[100];
    while(string_1[length] != '\n'){length++;}
    // printf("length:%d\n",length);
    for(int i = 0;i<length; i++){
        if(string_1[i]== ' '){
            if(counter == 0){
                arr[counter] = i;}
            else{
                arr[counter] = i - arr[counter-1]-count;count++;left = i;printf("%d\n",left);}
            counter++;
        }
        else if(i==(length-1)){
            arr[counter] = length-1 -left;printf("count:%d, last ele of arr:%d\n",count,arr[counter]);
            // printf("%d",counter);
        }
        else{continue;}
    }
    int long_word=0;
    int index = 0;
    for(int i = 0;i<=counter; i++){
        printf("%d ",arr[i]);
        if(long_word <= arr[i]){
            long_word = arr[i];
            index = arr[i-1];
        }
    }
    for(int i = (index+2); i<= (long_word+index+2);i++){
        printf("%c",string_1[i]);
    }
    printf("\nlong:%d, index:%d",long_word,index);
    return 0;
}