#include<stdio.h>
int main()
{

int n,even=0,odd=0;
int arr[100];
scanf("%d",&n);
for(int i=0;  i<n; i++)
{
scanf("%d",&arr[i]);
}
for(int i=0; i<n; i++)
{
if(arr[i]%2==0){
even++;
}
else{
odd++;
}
}
printf("No of odd is %d\n",odd);
printf("No of even is %d\n",even);
return 0;
}
