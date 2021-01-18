#include<stdio.h>
int main()
{
    int n,i,j,count=0;
    scanf("%d",n);
    int arr[n];
    for(i=0; i<n; i++)
    {
     scanf("%d",&arr[i]);
    }
    for(i=0; i<n; i++)
    {
    for(j=0; j<n; j++)
    {
      if(arr[i]==arr[j])
      {
          count+=1;
      }
    }
    }
    if(count%2!=0)
    {
        printf("%d",arr[i]);
    }
    else
    {
        printf("-1");
    }
    return 0;
}

