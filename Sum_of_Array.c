#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,arr[100],sum=0;
    scanf("%d",&n);
    for(int i=1; i<n+1; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=1; i<n+1; i++)
    {
       sum=sum+arr[i];

    }
   printf("Sum of Array is:%d",sum);
    return 0;

}

