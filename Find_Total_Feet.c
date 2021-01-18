#include<stdio.h>
int main()
{
    int n,arr[100],total=0;
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0; i<n; i++)
    {
      total=total+arr[i]/12;
    }
   printf("Total Feet :%d",total);
    return 0;

}

