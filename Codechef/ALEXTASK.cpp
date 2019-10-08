#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
long long i,j, a,q,n,r,fg,v,z,l;
long long a1[1000010];
long long gcd(long long a,long long b)
{
	if (!b)
		return a;
	return gcd(b, a%b);
}
int main()
{
	
	scanf("%lld", &v);
	while (v--)
	{
		l = (1e9)*(1e9) + (1e9);
		scanf("%lld",&n);
		for (i = 0; i < n; i++)
			scanf("%lld", &a1[i]);
				
		for (i = 0; i < n; i++)
			for (j = i + 1; j < n; j++)
				l = min(l, (a1[i] * a1[j]) / gcd(a1[i], a1[j]));
		printf("%lld\n", l);
 
	}
}
 