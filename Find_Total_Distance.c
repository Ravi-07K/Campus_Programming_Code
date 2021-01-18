#include<stdio.h>
#include<math.h>
int main()
{
    int n,arr[100],diff,sum=0;
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0; i<n-1; i++)
    {
       diff=abs(arr[i]-arr[i+1]);
       sum=sum+diff;
    }
    printf("Total Distance:%d",sum);
    return 0;

}

