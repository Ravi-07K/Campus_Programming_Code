#include<stdio.h>
int main()
{
    int n,arr[100],max=0,diff;
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0; i<n-1; i++)
    {
       diff=arr[i]-arr[i+1];
       if(diff>max)
       {
           max=diff;
       }
    }
    printf("Max_Diff:%d\n",max);

    return 0;

}
