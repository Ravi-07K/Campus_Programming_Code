#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,result;
    scanf("%d",&n);
    int arr[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0; i<n; i++)
    {
        result=sqrt(arr[i]);
        printf("%d\n",result);
    }
    return 0;
}
