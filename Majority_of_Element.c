#include <stdio.h>
int main()
{
    int  size,n;
    scanf("%d",&size);
    int arr[size];
    for(n=0;n<size;n++)
    {
        scanf("%d",&arr[n]);
    }
    findMajority(arr, size);
    return 0;
}
void findMajority(int arr[], int size)
{
    int maxCount = 0;
    int index = -1;
    for(int i = 0; i < size; i++)
    {
        int count = 0;
        for(int j = 0; j < size; j++)
        {
            if(arr[i] == arr[j])
            count++;
        }
        if(count > maxCount)
        {
            maxCount = count;
            index = i;
        }
    }

    if (maxCount > size/2)
    printf("%d",arr[index]);
    else
        printf("-1" );
        return 0;
}
