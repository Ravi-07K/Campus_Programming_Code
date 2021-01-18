#include<stdio.h>
int main()
{
    int n,i,j,sum1=0,sum2=0,result;
    scanf("%d",&n);
    int arr[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
		for(i=0;i<n-1;i++)
		{
			sum1+=arr[i];
			if(arr[i]>arr[i+1])
			{
				j=i;
				break;
			}
		}
		for(j=0;j<n;j++)
        {
			sum2+=arr[j];
        }
        result=sum1*sum2;
        printf("%d",result);

}
