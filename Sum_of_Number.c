#include<stdio.h>
int main()
{
    int n,sum=0;
    scanf("%d",&n);
    while(n!=0)
    {
        sum=sum+(n%10);
        n=n/10;
    }
    int p=0;
    if(sum>10)
    {
        while(sum!=0)
        {
            p=p+(sum%10);
            sum=sum/10;
        }
     printf("%d",p);
    }
    else
    {
      printf("%d",sum);
    }

    return 0;
}
