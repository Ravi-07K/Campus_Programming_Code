#include<stdio.h>
int main()
{
    int n,i,j,temp;
    scanf("%d",&n);
    int arr[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",arr[i]);
    }
    int Solution(int arr[])
    {
        int sum=0;
         for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        }
    }
		for(int i=0;i<n;i++)
        {
          sum+=arr[i];
        }
		int avg = sum/n;
		if(sum%n==0)
		{
			int i=0, j=n-1, count=0;
			while(i<j)
			{
				if(arr[i]<avg)
				{
					arr[j]--;
					arr[i]++;
					count++;
					if(arr[j]==avg)
                    {
                      j--;
                    }
					if(arr[i]==avg)
                    {
                      i++;
                    }
				}
				else
                {
                   i++;
                }
			}
			return count;
		}
		else
        {
           return -1;
        }
    }
	printf("%d",Solution(arr));
	return 0;
}
