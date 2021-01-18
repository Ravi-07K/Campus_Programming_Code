#include<stdio.h>
int main()
{
    int n,delete,arr[100],idx=0;
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&delete);
    for(int i=0; i<n; i++)
    {
       if(arr[i]==delete)

       {
           idx=i;
        return;
       }
       else{
        printf("Element Not Found!");
       }

    }
    printf("Remains Element:%d",idx);
    return 0;
}

