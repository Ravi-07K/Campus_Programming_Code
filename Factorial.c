#include<stdio.h>
#include<math.h>
int main()
{
    long long n,i,j,fact=1,t;
    scanf("%lld",&t);
    while(t--)
    {
    scanf("%lld",&n);
    for(i=1; i<=n; i++)
    {
        fact=fact*i;
    }
     printf("%lld\n",fact);
     fact=1;
    }
    return 0;
}
