#include<stdio.h>
int main()
{
    int n,high=0,count=1,i;
    scanf("%d",&n);
    int arr[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n-1; i++)
		{
			if(arr[i]%2==0)
            {
				if(arr[i+1]%2==1)
                {
                   count++;
                }
				else
				{
					high=count;
					count=1;
				}
            }
			else
            {
				if(arr[i+1]%2==0)
                {
                   count++;
                }
				else
				{
					high=count;
					count=1;
				}
            }
		}
		if(count>high)
        {
           high=count;
        }
        printf("%d",high);
        return 0;
}
