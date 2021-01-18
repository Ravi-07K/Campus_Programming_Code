#include <stdio.h>
int main()
{
    int  size,n;
    printf("Enter the size of the array\n");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the elements of the array\n");
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
    printf("Majority element is %d",arr[index]);
    else
        printf("Majority Element does not exist" );
        return 0;
}
