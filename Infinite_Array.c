#include<stdio.h>
int main()
{
   long long  n,i,sum[0],q;
   scanf("%d",&n);
   int arr[n];
   for(i=0; i<n; i++)
   {
       scanf("%lld",&arr[i]);
   }
   scanf("%lld",&q);
   long long  li[q],ri[q];
   for(i=0; i<q; i++)
   {
       scanf("%lld",&li[i]);
   }
   for(i=0; i<q; i++)
   {
       scanf("%lld",&ri[i]);
   }
   for(i=0; i<li[i]; i++)
   {
       sum[i]=sum[i]+arr[i];
   }
   printf("%d",sum[i]);
   return 0;

}
