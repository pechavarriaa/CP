#include <stdio.h>
#include <math.h>
#include <algorithm>
using namespace std;
long long m, i, temp,v, j, a, b, c, t, d, res, n, mod = 1e9 + 7, x, arr[300000],narr[30000000];
long long fun(long long a, long long x) {
	long long c = 1; 
	while (x > 0) {
		if (x & 1)
			c = (c*a) % mod;
		x /= 2;
		a = ((a*a)) % mod;
	}
	return c;
}
 
int main()
{
	scanf("%lld", &t);
	while (t--)
	{
		scanf("%lld%lld%lld", &n, &x, &m);
		m = m % mod;
		for (i = 1; i <= n; i++) {
			scanf("%lld", &arr[i]);
			arr[i] = arr[i] % mod;
		}
			c = x - 1;
		   a =1; 
			res = arr[x];
		for (i = 1; i < x; i++)
		{
			j = fun(i, mod - 2);
				a = (a*m) % mod;
			a = (a*j) % mod;
			res= (res+(arr[c] *a) % mod)%mod;
			m = (m + 1) % mod;
			c--; 
		}
		printf("%lld\n", res);
	
	}
}