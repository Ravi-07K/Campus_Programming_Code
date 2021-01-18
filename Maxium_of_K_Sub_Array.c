#include<stdio.h>
int main()
{
    int n,k,i,j,MaxCount;
    scanf("%d",&n);
    scanf("%d",&k);
    int arr[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i <= n - k; i++) {
        MaxCount= arr[i];
        for (j = 1; j < k; j++) {
            if (arr[i + j] > MaxCount)
                MaxCount = arr[i + j];
        }
        printf("%d ", MaxCount);
    }
    return 0;
}
