#include<stdio.h>
int main()
{
    int n,arr[100],pos=0,neg=0,zero=0;
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0; i<n; i++)
    {
        if(arr[i]>0)
        {
            pos++;
        }
        else if(arr[i]<0)
        {
            neg++;
        }
        else
        {
            zero++;
        }
    }
    printf("No of Positive:%d\n",pos);
    printf("No of Negative:%d\n",neg);
    printf("No of Zero:%d",zero);
    return 0;

}
