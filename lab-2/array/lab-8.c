#include <stdio.h>
int main()
{
    int n, counter = 0;
    scanf("%d", &n);
    int arr[n + 1];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i] != 0)
        {
            printf("%d,", arr[i]);
            
        }
        
        if (arr[i] == 0)
        {
            counter++;
        }
    }
    for (int i = 0; i < counter; i++)
    {
        printf("0");
        if (i != counter - 1)
            {
                printf(",");
            }
    }

    return 0;
}