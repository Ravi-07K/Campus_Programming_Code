#include<stdio.h>
#include<string.h>
int main()
{
    char str[100],vcount=0,ccount=0;
    scanf("%s",str);
    for(int i=0; i<strlen(str); i++)
    {
       if(str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O'
       || str[i]=='U' ||str[i]=='a' || str[i]=='e' || str[i]=='i' ||  str[i]=='o' || str[i]=='u')
       {
        vcount++;
       }
       else
       {
           ccount++;
       }
    }
    printf("Vowels is %d\nConsonant is  %d",vcount,ccount);
    return 0;
}
