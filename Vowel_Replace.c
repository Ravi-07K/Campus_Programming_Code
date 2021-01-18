
#include<stdio.h>
#include<string.h>
int main()
{
    char str[100], ch, i;
    int t;
    scanf("%d",&t);
    while(t--)
    {
    scanf("%s",str);
    for(i=0; str[i]!='\0'; i++)
    {
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o'
           || str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='I'
           || str[i]=='O' || str[i]=='U')
        {
            str[i] = '*';
        }
    }
    printf("%s\n",str);
    }
    return 0;
}
