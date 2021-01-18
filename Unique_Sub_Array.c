#include<stdio.h>
int main()
{
    int n,i,sum=0,t;
    scanf("%d",&t);
    while(t--)
    {
    scanf("%d",&n);
    int arr[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    }
    for(i=0; i<n; i++)
    {
       sum+=((n-i)*(i+1));
    }
    printf("%d",sum);
    return 0;
}

