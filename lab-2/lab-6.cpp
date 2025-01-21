#include<stdio.h>
int main(){
    int n,largenum = 0;
    scanf("%d",&n);
    int arr[n+1];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        if(largenum <= arr[i]){
            largenum = arr[i];
        }
    }
    //printf("%d",largenum);
    int arr_2[largenum+1] = {0};
    for(int i=0;i<largenum;i++){
        arr_2[arr[i]]=arr[i];
        if(arr_2[arr[i]]>=2){
            printf("Yes,duplicate exists.");break;
        }
        else{
            continue;
        }
        printf("No,duplicate does'nt exists.");

    }

    return 0;
}