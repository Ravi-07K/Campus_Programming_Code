#include<stdio.h>
#include<math.h>
int main()
{
    int n,sum=0,i,x,y;
    scanf("%d",&n);
    int arr[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    y=pow(2,n)/2;
    for(i=0; i<n; i++)
    {
        if(arr[i]>=y)
        {
           sum=sum+arr[i];
        }
    }
    printf("%d",sum);
    return 0;

}
