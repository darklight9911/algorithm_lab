#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n+1];
    for(int i =0; i<n;i++){
        scanf("%d",&arr[i]);
    }
    int arr_2[n+1];
    for(int i = 0;i< n;i++){
        arr_2[i] = 0;
    }
    for(int i=0; i< n; i++){
        //arr_2[arr[i]] = arr_2[arr[i]]+1;
        arr_2[arr[i]]++;
    }
    for(int i=0; i< n; i++){
        if(arr_2[i]!=0){
                if(arr_2[i]>1){
                    printf("%d:%d times\n",i,arr_2[i]);}
                else{
                    printf("%d:%d time\n",i,arr_2[i]);
                }

        }
    }
    return 0;
}
