#include<stdio.h>
int main()
{
    int n,arr[100],MaxD=arr[1]-arr[0];
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0; i<n; i++)
    {
      if(arr[i+1]-arr[i]>MaxD)
      {
          MaxD=arr[i+1]-arr[i];
      }
    }
   printf("Maximum Adjacent Diff:%d",MaxD);
    return 0;

}

