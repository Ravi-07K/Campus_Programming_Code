#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int count=0;
    scanf("%s",&str);
    char result=str[0];
    for(int i=0; i<strlen(str); i++)
    {
        int current=1;

        for(int j=i+1; j<strlen(str); j++)
        {
            if(str[i]!=str[j])
                break;
            current++;
        }
        if(current>count)
        {
            count=current;
            result=str[i];
        }
    }
    printf("%s",result);
    return 0;
}
