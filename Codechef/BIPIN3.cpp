#include <stdio.h>
#include <vector>
#include <string.h>
#include <algorithm>
using namespace std;
long long t, a, b, n, m,k,mod=1e9+7;
long long fun(long long n, long long k)
{
	long long x=1;
	while (k>0)
	{
		if (k % 2)
			x = (x*n) % mod;
		n = (n*n) % mod;
		k = k / 2;
	}
	return x;
}
int main()
{
	scanf("%lld", &t);
	while (t--)
	{
		scanf("%lld%lld",&n,&k);
		printf("%lld\n",((k%mod)*fun(k-1,n-1))%mod);
	}
} 