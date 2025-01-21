#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n+1];
    for(int i =0; i<n;i++){
        scanf("%d",&arr[i]);
    }
    int pos;
    printf("enter rotating positions:");
    scanf("%d",&pos);
    for(int i=pos; i< n; i++){
        printf("%d",arr[i]);

        printf(",");


    }
    for(int i = 0; i<pos;i++){
        printf("%d",arr[i]);
        if(i != pos-1){
            printf(",");
        }
    }
    return 0;
}
