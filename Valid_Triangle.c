#include<stdio.h>
int main()
{
    int n,sum=0,i;
    scanf("%d",&n);
    int arr[n];
    for(i=0; i<3; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0; i<3; i++)
    {
        sum=sum+arr[i];
    }
    if(sum==180)
    {
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}
