#include<stdio.h>
int main()
{
int series[100],n;
    int a=1,b=1;
    series[0]=1,series[1]=1;
    scanf("%d",&n);
    for(int i=2;i<n;i++){
        series[i]=series[i-1]+series[i-2];
    }
    for(int i=0;i<n;i++){
        printf("%d ",series[i]);
    }
    return 0;
}
