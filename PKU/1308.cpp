#include <cmath>
#include <cstdio>
#include <vector>
#include <queue>
#include <iostream>
#include <algorithm>
#define oo 99999999
using namespace std;
int x,a,b,c, y, q, mi,j, i, n,ma,sol[91000],usa[92001],pap[90010];
int main()
{
	while (scanf("%d%d", &x, &y) && (x+y>=0))
	{
		j++; n = 1; b = 0;
		for (i = 1; i < 1200; i++)
			pap[i] = usa[i] = 0;
		pap[y]++; usa[x] = usa[y] = 1;
		if(x+y)
		while (scanf("%d%d", &x, &y) && (x+y))
		{
			pap[y]++;
			usa[x] = usa[y] = 1;
		}
		else
		{
			printf("Case %d is a tree.\n", j);
			continue;
		}
		for (i = 0; i < 1200; i++)
		{
			if (pap[i] == 1)
				b--;
			if (usa[i])
				b++;
		}
		if(b==1)
		printf("Case %d is a tree.\n",j);
		else
			printf("Case %d is not a tree.\n", j);
	}
}