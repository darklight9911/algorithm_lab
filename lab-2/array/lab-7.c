#include<stdio.h>
int main(){
    int n,sum;
    scanf("%d %d",&n, &sum);
    int arr[n+1];
    for(int  i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    for(int i =0; i<n;i++){
        for(int j =i+1; j<n;j++){
            if(i+j == sum){
                printf("(%d,%d)\n",i,j);
                
            }
            else{
                continue;
            }
        }
    }
    return 0 ;
}