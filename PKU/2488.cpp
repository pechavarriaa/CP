#include <cmath>
#include <cstdio>
#include <vector>
#include <queue>
#include <iostream>
#include <algorithm>
using namespace std;
struct ura {
	int x, y;
}ot,w;
queue<ura>cola;
queue<ura>res;
int usa[110][110], lns,x, y, c,i,j, q, u,a,b,t,so[1000][2];
int lis[8][2] = { {-2,-1},{-2,1},{-1,-2},{-1,2},{1,-2},{1,2},{2,-1},{2,1}};
bool ad(int a, int b)
{
	if (a >= 1 && a <= y && b >= 1 && b <= x)
		return true; return false;
}
void sol(int u, int v, int q,int r)
{
	if (q == 0) 
	{
		lns = 1;
		return;
	}
	for (int i = 0; i < 8 &&  !lns; i++)
	{
		if (ad(u + lis[i][0], v + lis[i][1]) && !usa[u + lis[i][0]][v + lis[i][1]])
		{
			a = u + lis[i][0];
			b = v + lis[i][1];
			usa[a][b] = 1;
			so[r][0] = a, so[r][1] = b;
			sol(a, b, q - 1, r + 1);
			usa[u + lis[i][0]][v + lis[i][1]] = 0;
		}
	}
}
int main()
{
	scanf("%d", &c);
	while (c--)
	{
		lns = 0;
		scanf("%d%d",&x,&y);
		q = 0;
		for (i = 0; i < 10; i++)
			for(j=0;j<10;j++)
				usa[i][j] = 0,so[q][0]=so[q++][1]=0;
		q = x*y-1;
		usa[1][1] = 1;
		so[0][0] = 1, so[0][1] = 1;
		sol(1,1,q,1);
		printf("Scenario #%d:\n",++u);
		if (!lns)
			printf("impossible");
		else
		{
			q = 0;
			while (so[q][0]) 
			{
				printf("%c", 'A' - 1 + so[q][0]);
				printf("%d", so[q++][1]);
			}
		}
		printf("\n\n");
	}
}