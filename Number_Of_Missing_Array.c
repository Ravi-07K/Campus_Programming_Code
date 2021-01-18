#include<stdio.h>
int main()
{
    int n,i,total;
    scanf("%d",&n);
    int arr[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    total=(n+1)*(n+2)/2;
    for(i=0; i<n; i++)
    {
        total-=arr[i];
    }
    printf("%d",total);
    return 0;
}
