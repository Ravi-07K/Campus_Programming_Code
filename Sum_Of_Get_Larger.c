//123 456 789
//3
//Key = (SMALLEST digit in the thousands place of
//all three numbers] (LARGEST digit in the
//hundreds place of all three numbers]
//[SMALLEST digit in the tens place of all three
//numbers] (LARGEST digit in the units place of all

#include<stdio.h>
int getlarge(int n)
{
int max=0;
while(n)
{
int r=n%10;
if(r>max) max=r;
n/=10;
}
return max;
}
int getslarge(int n)
{
int max=0,smax=0;
while(n)
{
int r=n%10;
if(r>max)
{
smax=max;
max=r;
}
else
{
if(r!=max && r>smax)
smax=r;
}
n/=10;
}
return smax;
}
int main() {
    int a[3],i,sum1=0,sum2=0;
    for(i=0;i<3;i++)
    {
    scanf("%d",&a[i]);
    sum1=sum1+getlarge(a[i]);
    sum2=sum2+getslarge(a[i]);
    }
    printf("%d",sum1-sum2);
    return 0;
}
