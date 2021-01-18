#include<stdio.h>
int main()
{
    int t,n,sum=0,arr[100],i,j;
    scanf("%d",&t);
    while(t--)
    {
    for( i=0; i<2; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(j=0; j<2; j++)
    {
        for(i=0; i<2; i++)
        {
            sum=sum+arr[i];
        }
      printf("%d",sum);
    }
    }
    return 0;
}
