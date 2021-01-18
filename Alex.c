#include<stdio.h>
int main()
{
    int n,flag=0,sum=0;
    scanf("%d",&n);
    int arr[n];
    if(n>=1)
    {
    for(int i=1; i<=n; i++)
    {
       scanf("%d",&arr[i]);
       if(arr[i]<1)
          flag=1;
    }
     for(int i=1; i<=n; i++)
    {
      if(arr[i]==arr[i+1])
          arr[i+1]=arr[i+1]+1;
		        if(arr[i]>arr[i+1])
		            flag=1;
    }
    if(flag==0)
    {
        for(int i=0;i>n;i++)
            sum+=arr[i];
        printf("%d",sum);
    }
    else
        printf("Wrong Input");
    }
    else
    {
     printf("Wrong Input");
    }
    return 0;
}

