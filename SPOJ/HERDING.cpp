#include <stdio.h>
#include <math.h>
#include <string.h>
#include <queue>
#include <algorithm>
using namespace std;
int i, j, k, a, n, m, fg, d, arr[300][4], usa[1005][1005];
char w[1005][1005];
void dfs(int a,int b) {
	usa[a][b] = d;
	if (!usa[a + arr[w[a][b]][0]][b + arr[w[a][b]][1]])
		dfs(a + arr[w[a][b]][0], b + arr[w[a][b]][1]);
	else
		if (usa[a + arr[w[a][b]][0]][b + arr[w[a][b]][1]] != d)
			fg = 0;
}
int main()
{
	arr['S'][0] = 1;
	arr['N'][0] = -1;
	arr['W'][1] = -1;
	arr['E'][1] = 1;
 
	scanf("%d%d", &n, &m);
	for (i = 1; i <= n; i++)
		for (j = 1; j <= m;j++)
			scanf(" %c", &w[i][j]);
 
	for (i = 1; i <= n; i++)
		for (j = 1; j <= m; j++) {
			if (!usa[i][j])
			{
				d++;
				k++; fg = 1;
				dfs(i, j);
				if (!fg)
					k--;
			}
		}
	printf("%d\n", k);
}