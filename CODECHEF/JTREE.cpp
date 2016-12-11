#include <bits/stdc++.h>
#define oo 1e17
using namespace std;
struct ura {
	int k;
	long long w;
}gs;
int i, j, k, n,p,d,u, m,z,q,a,v,b,t,gy[100100],gt[100100];
vector<int> mv[100100];
vector <ura>tik[100100];
long long w,cost[100100], arb[900100];
void act(int n, int l, int r, int idx,long long w)
{
	if (l > idx || r < idx)
		return;
	if (l == r && l == idx)
		arb[n]=w;
	else
	{
		act(n * 2, l, (l + r) / 2, idx,w);
		act(n * 2 + 1, 1 + (l + r) / 2, r, idx,w);
		arb[n] = min(arb[n * 2], arb[n * 2 + 1]);
	}
}
long long que(int n, int l, int r, int a, int b)
{
	if (b<l || a>r)
		return oo;
	if (l >= a && r <= b)
		return arb[n];
	else
	{
		return min(que(n * 2, l, (l + r) / 2, a, b), que(n * 2 + 1, 1 + (l + r) / 2, r, a, b));
	}
}
void dfs(int x, int gr)
{
	gr++;
	for (int d=0;d<gy[x];d++)
	{
		int u = mv[x][d];
		cost[u] = oo;
		for (z=0;z<gt[u];z++)
		{
			if (gr - tik[u][z].k <= 0)
				cost[u] = min(cost[u],tik[u][z].w);
			else
				cost[u] = min(cost[u],tik[u][z].w+que(1,1,n,gr-tik[u][z].k,gr-1));
		}
		act(1, 1, n, gr,cost[u]);
		dfs(u, gr);
	}
}
int main()
{
	scanf("%d%d", &n, &m);
	for (i = 0; i < n-1; i++)
	{
		scanf("%d%d",&a,&b);
		mv[b].push_back(a);
		gy[b]++;
	}
	for (j = 0; j < m; j++)
	{
		scanf("%d%d", &v, &k);
		scanf("%lld", &w);
		tik[v].push_back({k,w});
		gt[v]++;
	}
		dfs(1,0);
	scanf("%d",&q);
	while (q--)
	{
		scanf("%d", &a);
		printf("%lld\n", cost[a]);
	}
}