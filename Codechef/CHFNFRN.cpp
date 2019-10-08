#include <bits/stdc++.h>
#define min(a,b) ((a<b)?(a):(b))
using namespace std;
int i, n,m,z,a,b,j,t,res;
int arr[1100];
vector<int>g1[1100], g2[1100];
void ch(int x, int col)
{
	arr[x] = 3 - col;
	for (int v : g2[x])
	{
		if (!arr[v])
			ch(v, 3 - col);
		else if (arr[v] !=col)
			res = 1;
	}
}
int main() 
{
	scanf("%d", &t);
	while (t--)
	{
		res = 0;
		scanf("%d%d",&n,&m);
		for (i = 0; i < m; i++)
		{
			scanf("%d%d", &a, &b);
			g1[a].push_back(b);
			g1[b].push_back(a);
		}
		for (i = 1; i <= n; i++)
		{
			z = g1[i].size();
			while (z--)
			{
				arr[g1[i][z]]++;
				g1[i].pop_back();
			}
			for (int u : g2[i])
				arr[u]++;
 
			for (j = 1; j <= n; j++)
			{
				if (i!=j && !arr[j])
				{
					g2[i].push_back(j);
					g2[j].push_back(i);
				}
				arr[j] = 0;
			}
		}
		for (i = 1; i <= n; i++)
		{
			for (int u : g2[i])
			{
				if (!arr[u]) {
					arr[i] = 2; ch(u, 2);
				}
			}
		}
		for (i = 1; i <= n; i++) {
			arr[i] = 0;
			while (!g2[i].empty())
				g2[i].pop_back();
		}
		printf("%s\n", res ? "NO" : "YES");
	}
} 