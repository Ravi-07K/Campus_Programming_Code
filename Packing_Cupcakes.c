
#include<stdio.h>
int main()
{
    long long  n,i;
    scanf("%lld",&n);
    long long  arr[n];
    for(i=0; i<n; i++)
    {
        scanf("%lld",&arr[i]);
    }
    for(i=0; i<n; i++)
    {
        if(arr[i]%2==0)
        {
            printf("%d\n",arr[i]);
        }
        else
        {
            printf("%d\n",arr[i]/2+1);
        }

    }
    return 0;

}
