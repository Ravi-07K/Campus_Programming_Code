#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,j,sum=0;
    scanf("%d",&n);
    int arr[n];
   for(j=0; j<n; j++)
   {
       for(i=0; i<2; i++)
       {
           scanf("%d",&arr[i]);
       }
       for(i=0; i<2; i++)
       {
           sum=sum+arr[i];
       }
       printf("%d\n",sum);
       sum=0;
   }
    return 0;

}


