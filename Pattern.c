#include<stdio.h>
int main()
{
    int n=5,i,j,count=1;
    for(i=0; i<n; i++)
    {
        for(j=1; j<=i+1; j++)
        {
            if(j==1)
            {
               printf("%d",count);
            }
        else
        {
            printf("*%d",count);
        }
        }
        count+=1;
        printf("\n");
    }
    return 0;
}
