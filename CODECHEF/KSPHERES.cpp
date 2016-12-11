 
#include <stdio.h>
#include <algorithm>
#include <math.h>
using namespace std;
long long i, j,k, s,n,m,mx,g,c,arr[2205][2205],arr2[2219],sm[2001][2003];
int main()
{
int	md = 1e9 + 7;
	scanf("%lld%lld%lld",&n,&m,&c);
	for (i = 1; i <= n; i++)
	{
		scanf("%lld", &j);
		arr[1][j]++;
		g = max(g, j);
	}
	for (j = 1; j <= m;j++)
	{
		scanf("%lld", &i);
		arr2[i]++;
		g = max(g, i);
	}
	for (i = 1; i <= g; i++) {
		arr[1][i] *= arr2[i];
		if(arr[1][i])
		mx = max(i, mx);
	}
	k = 1;
	while (s <= c) {
		s++;
		for (i = mx; i >= 1; i--)
			sm[s][i] = (arr[s][i]+sm[s][i+1])%md;
		for (i = mx; i >= 1; i--)
			arr[s+1][i-1] = (sm[s][i]*arr[1][i-1])%md;
		if (s > 1)
			printf("%lld ",sm[s][1]);
		}

}
 