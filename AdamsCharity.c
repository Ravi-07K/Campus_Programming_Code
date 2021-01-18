#include<stdio.h>
int main()
{
    int n,coins=0;
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
        coins+=i*i;
    }
    printf("%d",coins);
    return 0;
}
