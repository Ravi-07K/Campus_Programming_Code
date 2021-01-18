#include<stdio.h>
int main()
{
    int n,i,count=0;
    scanf("%d",&n);
    char str[100];
    for(i=0; i<n; i++)
    {
        scanf("%s",&str[i]);
    }
    for(i=0; i<n; i++)
    {
        if(str[i]=='4')
        {
            count++;
        }
    }
    printf("%s %d",str[i],count);
    return 0;
}













/*#include<stdio.h>
int  main()
{
char s[30];
int i,flag=0,n=0;
printf("enter the number:");
scanf("%s",s);
for(i=0;s[i]!='\0';i++)
{
if(s[i]=='4')
{
flag=flag+1;
}
}
if(flag==0)
printf("given number not contains 4");
else
printf("given number contains 4");
return 0;
}*/
