#include <stdio.h>
#define max(a, b) (((a)>(b)) ? (a) : (b))
int mat[65][65][5];
int n, m, a, r, ma,cu,i, j, b, c, lis[4] = { 1,2,4,8}, mov[4][2] = {0,-1,-1,0,0,1,1,0};
int usa[65][65];
void dfs(int x,int y, int st)
{
		usa[x][y] = r++;
	for (int i = 0; i < 4; i++)
		if (mat[x][y][i] && !usa[x + mov[i][0]][y+mov[i][1]])
			dfs(x + mov[i][0], y + mov[i][1], st + 1);
}
int main()
{
	scanf("%d%d", &n, &m);
	for (i = 0; i < n; i++)
		for (j = 0; j < m; j++)
		{
			scanf("%d", &r);
			for (a = 3; a >-1; a--)
			{
				if (r - lis[a]>=0)
					r = r - lis[a];
				else
					mat[i][j][a] = 1;
			}
		}

	for (i = 0; i < n; i++)
		for (j = 0; j < m; j++)
		{
			if (!usa[i][j]) 
			{
				cu++; r = 1;
				dfs(i, j, 1);
				ma = max(ma,r-1);
				
			}
		}
	printf("%d\n%d\n", cu, ma);
}
