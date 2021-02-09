#include<stdio.h>
int main()
{
    int n,i,target;
    scanf("%d",&n);
    int arr[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&target);
    for(i=0; i<n; i++)
    {
        if(arr[i]==target)
        {
            printf("%d",i);
        }
    }
    return 0;
}
