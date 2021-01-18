#include<stdio.h>
int main()
{
    int n,m,p,q;
    scanf("%d",&n);
    scanf("%d",&m);
    if(n>m)
    {
       q=(n*m)-(n-m);
       printf("%d",q);
    }
    else if(n<=m)
    {
        p=(m%n)-(m+n);
        printf("%d",p);
    }
    else
    {
        printf("0");
    }
    return 0;
}
