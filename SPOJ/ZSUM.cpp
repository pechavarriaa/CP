#include <stdio.h>
#include <string.h>
#include <math.h>
#include <algorithm>
#include <map>
#include <iostream>
#include <queue>
long long i, j, t, l, m, n, c, k,res;
long long exp(long long a,int b) {
	long long res=1;
	while (b>0)
	{
		if (b % 2)
			res = (res*a)%m;
		a =(a*a)%m;
		b /= 2;
	}
	return res;
}
int main() {
	while(scanf("%lld%lld", &n, &k)&& (n || k)){
	m = 1e7 + 7;
	res = ((((exp(n, k) + (2 * exp(n - 1, k)) % m)) % m + (2 * exp(n - 1, n - 1)) % m) % m + exp(n, n)) % m;
	printf("%lld\n", res);
	res = 0;
	}
} 