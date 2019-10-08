#include <stdio.h>
#include <iostream>
#include <string>
#include <math.h>
#include <algorithm>
#include <map>
using namespace std;
long long i,n,m,s,t,j,lee[10001],arr[1002][1002];
long long mod = 1e9 + 7;
int main() {
	scanf("%lld", &t);
	while (t--) {
		scanf("%lld%lld%lld", &n, &m, &s);
		arr[0][s] = 1;
		for (i = 1; i <= m; i++)
			scanf("%lld", &lee[i]);
		for (i = 1; i <= m; i++)
			for (j = 1; j <= n; j++)
			{
				if (j - lee[i] > 0)
					arr[i][j - lee[i]] = (arr[i][j - lee[i]] + arr[i - 1][j]) % mod;
				if (j + lee[i] < n + 1)
					arr[i][j + lee[i]] = (arr[i][j + lee[i]] + arr[i - 1][j]) % mod;
			}
		for (i = 1; i <= n; i++) {
			if (i != n)
				printf("%lld ", arr[m][i]);
			else
				printf("%lld\n", arr[m][i]);
		}
		for (i = 0; i <= m; i++)
			for (j = 0; j <= n; j++)
				arr[i][j] = 0;
	}
} 