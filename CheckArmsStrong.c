#include<stdio.h>
int main()
{
    int n,digit,sum=0;
    scanf("%d",&n);
    int copy=n;
    while(copy>0)
    {
           digit = copy%10;
			copy = copy / 10;
			sum = sum + (digit*digit*digit);
    }
    if(sum==n)
    {
        printf("Armstrong");
    }
    else
    {
      printf("Not Armstrong");
    }
    return 0;
}
