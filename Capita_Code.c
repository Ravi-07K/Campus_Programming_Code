#include<stdio.h>
#include<math.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,k,x,y;
        scanf("%d %d %d %d",&x,&y,&k,&n);
        int d=abs(x-y);
        if(d%(2*k)==0)
        {
            printf("Yes");
        }
        else
        {
            printf("No");
        }

    }
    return 0;
}
