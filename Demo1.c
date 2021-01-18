#include<stdio.h>
int main()
{

    int i;
    for(i=0; i<=10; i++)
    {
        if(i==4)
        {
            printf("%d ",i);
            continue;
        }
        else if(i!=4){
            printf("%d ",i);
        }
        else
            break;
        }
        return 0;
    }

