#include<stdio.h>
int main()
{
    int n,i,even=0,odd=0,count;
    scanf("%d",&n);
    int arr[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0; i<n; i++)
    {
        if(i%2==0)
        {
            even++;
        }
        else{
            odd++;
        }
    }
    count=((even/2)+(odd/2));
    printf("%d",count*2);
    return 0;
}
