#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n+1];
    for(int i =0; i<n;i++){
        scanf("%d",&arr[i]);
    }
    int temp = arr[0];
    int highest,secondHighest;
    for(int i=0;i<n;i++){
        if(arr[i]>=arr[0]){
            highest= arr[i];
                    }
    }
    for(int i=0;i<n;i++){
        if(arr[i]< highest && arr[i]>= arr[0]){
            secondHighest= arr[i];
        }
    }
    //printf("%d\n",highest);
    printf("%d\n",secondHighest);
    return 0;
}
