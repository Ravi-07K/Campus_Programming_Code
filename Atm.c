#include<stdio.h>
int main()
{
    int amount;
    float totalamount;
    scanf("%d %f",&amount,&totalamount);
    if(amount<=2000 && totalamount<=2000)
    {
    if(amount>totalamount)
    {
        printf("%.2f",totalamount);
    }
    else if(amount%5==0)
    {
        printf("%.2f",totalamount-amount-0.50);
    }
    else
    {
       printf("%.2f",totalamount);
    }
    }
    return 0;

}
