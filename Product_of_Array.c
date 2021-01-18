#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,arr[100],pro=1;
    scanf("%d",&n);
    for(int i=1; i<n+1; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=1; i<n+1; i++)
    {
       pro=pro*arr[i];

    }
   printf("Sum of Array is:%d",pro);
    return 0;

}

