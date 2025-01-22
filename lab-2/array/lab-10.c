#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n+1];
    for(int  i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    int diff= 0;
    for(int i =0; i<n;i++){
        for(int j =i+1; j<n;j++){
            if(arr[j]>=arr[i]){
                if(diff<= arr[j]-arr[i]){
                    diff = arr[j]-arr[i];

                }
            }
        }
    }
    printf("%d",diff);
    return 0;
}
