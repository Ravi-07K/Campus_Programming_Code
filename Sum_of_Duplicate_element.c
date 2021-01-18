#include<stdio.h>
int main()
{
    int n,i,j,count=1,sum=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
                sum=sum+arr[i];
                printf("Duplicates elements are:%d\n",arr[i]);
                printf("Sum of duplicates elements are:%d\n",sum*count);
            }
        }
    }
    return 0;
}
