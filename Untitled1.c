#include<stdio.h>
int main()
{
int arr[5];
int n,even=0,odd=0;
scanf("%d",&n);
for(int i=1;  i<n; i++)
{
scanf("%d",&arr[i]);
}
for(int i=1; i<n; i++)
{
if(arr[i]%2==0){
even++;
}
else if(arr[i]%2!=0){
odd++;
}
}
printf("No of odd is %d\n",odd);
printf("No of even is %d",even);
return 0;
}
