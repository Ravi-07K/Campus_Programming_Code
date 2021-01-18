#include<stdio.h>
int main()
{
    long long n,k,count=0,i;
    scanf("%lld %lld",&n,&k);
    long arr[n];
    for(i=0; i<n; i++)
    {
        scanf("%lld",&arr[i]);
    }
    for(i=0; i<n; i++)
    {
        if(arr[i]%k==0)
        {
          count++;
        }

    }
    printf("%d",count);
    return 0;
}
