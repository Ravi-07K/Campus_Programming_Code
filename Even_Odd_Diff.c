#include<stdio.h>
int main()
{
    int n,arr[100],even=0,odd=0;
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0; i<n; i++)
    {
       if(arr[i]%2==0)
       {
           even+=arr[i];
       }
       else
       {
           odd+=arr[i];
       }
    }
    printf("Diff of Odd Even:%d",odd-even);
    return 0;

}

