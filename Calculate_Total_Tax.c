#include<stdio.h>
int main()
{
    int n,arr[100],k,p,sum=0;
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0; i<n; i++)
    {
        k=arr[i]-1000;
       if(k>=1000)
       {
           p=k/10;
           sum=sum+p;
       }
       else
       {
           sum=sum+0;
       }
    }
   printf("Total Tax:%d",sum);
    return 0;

}

