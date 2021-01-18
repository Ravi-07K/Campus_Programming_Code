#include<stdio.h>
int main()
{
    int n,search,arr[100];
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&search);
    for(int i=0; i<n; i++)
    {
       if(arr[i]==search)
       {
        printf("Element Available\n");
        break;
       }

    }
    return 0;
}
