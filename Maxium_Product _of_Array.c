#include<stdio.h>
int main()
{
    int t,n,pro=1;
    scanf("%d %d",&t,&n);
    int arr[n];
    while(t--)
    {
        for(int i=0; i<n; i++)
        {
            scanf("%d",&arr[i]);
        }
    }
    for(int i=0; i<n; i++)
    {
        pro=pro*arr[i];
    }
    printf("%d",pro);
    return 0;
}
