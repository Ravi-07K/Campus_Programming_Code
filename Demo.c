#include<stdio.h>
int main()
{
int n=100,sum=0;
int arr[n],i;
scanf("%d",&n);
for( i=1; i<n+1; i++)
{
    scanf("%d",&arr[i]);
}
for( i=1; i<n+1; i++)
{
  sum=sum+arr[i];
}
printf("Sum of the number is:%d",sum);
return 0;

}
