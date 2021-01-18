#include<stdio.h>
int main()
{
    int n,arr[100],small=arr[0],large=0;
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0; i<n; i++)
    {
      if(arr[i]>large)
      {
         large=arr[i];
      }
      if(arr[i]<small)
      {
          small=arr[i];
      }
    }
   printf("Smallest Number:%d",large-small);
    return 0;

}


