#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n+1];
    for(int i =1; i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i =1; i<n;i++){
      if(arr[i]!=i){
            printf("%d\n",i);
        }
    }
    return 0 ;
}
