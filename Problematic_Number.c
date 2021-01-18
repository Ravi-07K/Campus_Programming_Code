#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    int Problematic(int N)
    {
    if(N%10==4 || N%10==5)
        return 1;
    else if( (N-4)%10==5 ||(N-5)%10==4)
        return 2;
    else
        return -1;
    }
    printf("%d",Problematic(N));
    return 0;
}
