#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int arr[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0; i<n; i++)
    {
        if(arr[i]>10)
        {
            printf("-1");
        }
        else
        {
           printf("Thanks for helping Chef!");
        }
        printf("\n");
    }
    return 0;
}
