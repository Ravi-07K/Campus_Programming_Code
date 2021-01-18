#include<stdio.h>
int main()
{
    int n,i,r,j;
    scanf("%d",&n);
    int arr[n],temp=arr[0];
    for( i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&r);
    for( i=0; i<n; i++)
    {
			if(arr[i]==n-1)
            {
              arr[i]=temp;
            }
			else
			{
				arr[i]=arr[i+1];
			}
    }
    for( i=1; i<=r; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
