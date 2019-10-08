#include <cstdio>
#include <algorithm>
using namespace std;
typedef long long ll;
int i, j, k, c,d,n,t;
ll mod = 1000000007,res,arr[200001],si=1;
ll el(ll x, ll y)
{
	ll a = 1;
	x = x%mod;
	while (y > 0)
	{
		if (y & 1)
			a = (a*x) % mod;
		x = (x*x) % mod;
		y /= 2;
	}
		return a;
}
int main()
{
	arr[0] = 1;
	for (i = 1; i < 100006; i++)
		arr[i] = (arr[i - 1] * i) % mod;
	scanf("%d",&t);
	while (t--) {
		scanf("%d%d", &n, &k); d = 0,res=0;
		for (i = 0; i < n; i++) {
			scanf("%d",&c);
			if (!c)d++;
		}
		if (d)
		{
			n = n - d;
			res = el(2, n);
		}
		else
		if (k >= n)
			res = el(2, n - 1);
		else
		for (i = (k % 2); i <= k && i <= n; i=i+2)
			res = (res + (arr[n] * el(arr[i]*arr[n-i], mod - 2))%mod) % mod;
		res = max(si, res);
		printf("%lld\n", res);
	}
}
 