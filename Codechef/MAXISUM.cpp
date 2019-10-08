#include <stdio.h>
#include <string.h>
#include <string>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;
long long i, j, l, u, t, e,ot,fg, n,k, m, arr[103000][3];
long long sum;
int main()
{
	scanf("%lld", &t);
	while (t--)
	{
		scanf("%lld%lld", &n, &k);
		for (i = 0; i < n; i++)
			scanf("%lld", &arr[i][0]);
		for (i = 0; i < n; i++)
			scanf("%lld", &arr[i][1]);
		for (i = 0; i < n; i++)
		{
			sum+= arr[i][0] * arr[i][1];
			if (arr[i][1] < 0)
				ot = -1 * arr[i][1];
			else
				ot = arr[i][1];
			fg = max(fg,ot);
		}
		printf("%lld\n", sum + k*fg);
		sum = 0; fg = -1;
	}
} 