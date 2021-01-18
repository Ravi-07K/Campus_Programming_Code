#include<stdio.h>
int main()
{
    int n,arr[100],index,pos=0,not=0;
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&index);
    for(int i=0; i<n; i++)
    {
      if(arr[i]==index)
      {
         pos=i;
         break;
      }
      else
      {
          pos=-1;
      }
    }
    printf("Index No:%d",pos);
    return 0;

}

