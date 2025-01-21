#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n+1];
    int leader = 0;
    for(int i = 0; i<n; i++){
        scanf("%d",&arr[i]);
        
    }
    
    for(int i = 0; i<n; i++){
        for(int j = i+1; j<n; j++){
            if(arr[j] < arr[i]){
                if(j == n-1){
                    printf("%d,",arr[i]);
                    if(j != n-1){
                        printf(",");
                    }
                }
                continue;
            }
            else{break;}
           
        }
    }
    printf("%d",arr[n-1]);
              
    return 0;
}