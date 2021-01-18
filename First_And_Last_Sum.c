#include<stdio.h>
int main()
{
    int n,sum=0,i,firstdigit,lastdigit,rem;
    scanf("%d",&n);
    int arr[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0; i<n; i++)
    {
        lastdigit=arr[i]%10;

    firstdigit=arr[i];
    while(arr[i]>=10)
    {
        arr[i]=arr[i]/10;
    }
    firstdigit=arr[i];
    sum=firstdigit+lastdigit;
    printf("%d\n",sum);
    }
    return 0;

}

