#include<stdio.h>

int main() {
	 long long t=0;
	scanf("%lld",&t);
	while(t--)
	{
        long long n=0,s=0,a=0;
	    scanf("%lld",&n);
	    a=n;
	    while(a>0)
	    {
	        s*=10;
	        s+=a%10;
	        a/=10;
	    }
	    printf("%lld\n",&s);
	}
	return 0;
}
