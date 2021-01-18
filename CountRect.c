#include<stdio.h>
int countRect(long long  n)
{
    long long  ans = 0;
    for (int length = 1; length <= sqrt(n); ++length)
    for (int height = length; height*length <= n; ++height)
            // height >= length is maintained
        ans++;
    return ans;
}
int main() {

    long long n;
    scanf("%d",&n);
    printf("%d", countRect(n));

    return 0;

}
