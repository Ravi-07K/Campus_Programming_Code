#include<stdio.h>
int main()
{
    int n,p,q;
    scanf("%d %d %d",&n,&p,&q);

    int a[n+2];
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    int ans=0;
    for(int i=0;i<n;i++)
    {
        int temp=0;
        for(int j=i;j<n;j++)
        {
            temp+=a[j];
            if(temp==q)
            {
                if(j-i+1!=p)
                    ans++;
            }
        }
    }
    printf("%d",ans);
    return 0;
}
