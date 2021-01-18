#include<stdio.h>
int  main()
{
char s[30];
int i,flag=0,t,count;
scanf("%d",&t);
while(t--)
{
scanf("%s",s);
for(i=0;s[i]!='\0';i++)
{
if(s[i]=='4')
{
count++;
flag=flag+1;
}
}
if(flag==0)
printf("0");
else
printf("%d\n",count);
count=0;
}
return 0;
}
