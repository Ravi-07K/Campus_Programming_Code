#include <stdio.h>
void main()
{
char string[80];
int count, nc = 0, sum1 = 0,sum2=0;
scanf("%s", string);
for (count = 0; string[count] != '\0'; count++)
{
if ((string[count] >= '0') && (string[count] <= '9'))
{
nc += 1;
sum1 += (string[count] - '0');
}
else{
    sum2+=string[count];
}
}
printf("%d", sum1+sum2);
}
