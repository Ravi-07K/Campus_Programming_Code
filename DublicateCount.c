#include<stdio.h>
int main()
{
    int n,i,j,count=1,temp;
    scanf("%d",&n);
    int arr[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
    for(i=0; i<n; i++)
    {
			if(i!=n-1)
			{
				for(j=i+1; j<n; j++)
				{
					if(arr[i]==arr[j])
						count++;
					else
						break;
				}
			}
            //printf("%d=>%d\n",arr[i],count);
			if(count>1)
            {
                printf("%d=>%d\n",arr[i],count);
            }
            i+=(count-1);
      }
			return 0;
}
