#include <cmath>
#include <cstdio>
#include <vector>
#include <queue>
#include <iostream>
#include <algorithm>
using namespace std;
int x,a,b,c,y, q,i,j,k, n,mat[110][110],usa[110];
long long sum;
struct ura
{
	int x, y,z;
}lis[10010],vr;
bool operator <(ura a, ura b)
{
	return (a.z < b.z);
}
int main()
{
	while (scanf("%d",&n)!=EOF)
	{
		k = 0; sum = 0; q = 0;
		for (i = 0; i < n; i++)
			usa[i] = 0;
		for (i = 0; i < n; i++)
			for (j = 0; j < n; j++)
			{
				scanf("%d", &mat[i][j]);
				if (i != j)
				{
					vr.x = i, vr.y = j, vr.z = mat[i][j];
					lis[k++] = vr;
				}
			}
		sort(lis, lis + k);
		usa[0] = 1;
		while (q < n - 1) 
		{
			for (i = 0; i < k; i++)
			{
				if ((usa[lis[i].x] + usa[lis[i].y])%2==0)
					continue;
				usa[lis[i].x] = 1;
				usa[lis[i].y] = 1;
				q++;
				sum += lis[i].z;
				i = k + 1;
			}
		}
		printf("%lld\n", sum);
	}
}
