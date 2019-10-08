#include <bits/stdc++.h>
#define min(a,b) ((a<b)?(a):(b))
#define oo 1000
using namespace std;
int i, j, k, n, a, b, c, v, m, ma, t, ot, pr, lis[500];
int arr[150010], arb[1150010], qi[150010], bit[150010];
vector<int>vax[55010];
void bd(int n, int l, int r)
{
	if (l == r)
		arb[n] = vax[l][0];
	else
	{
		int mid = (l + r) / 2;
		bd(n * 2, l, mid);
		bd(n * 2 + 1, mid + 1, r);
		arb[n] = max(arb[n * 2], arb[n * 2 + 1]);
	}
}
void act(int n, int l, int r, int a,int b)
{
	if (l > b || r < a)
		return;
	if (l == r) {
		int idx = l;
		qi[idx] = min(qi[idx] + 1, vax[idx].size() - 1);
		arb[n] = vax[idx][qi[idx]];
	}
	else if(arb[n]!=1)
	{
		act(n * 2, l, (l + r) / 2, a,b);
		act(n * 2 + 1, 1 + (l + r) / 2, r, a,b);
		arb[n] = max(arb[n * 2], arb[n * 2 + 1]);
	}
}
int que(int n, int l, int r, int a, int b)
{
	if (b<l || a>r)
		return 1;
	if (l >= a && r <= b)
		return arb[n];
	else
	{
		return max(que(n * 2, l, (l + r) / 2, a, b), que(n * 2 + 1, 1 + (l + r) / 2, r, a, b));
	}
}
int main()
{
	for (i = 2; i <= oo; i++)
	{
		if (!arr[i])
			lis[pr++] = i;
		for (j = i; j*i <= oo; j++)
			arr[i*j] = 1;
	}
	scanf("%d", &t);
	while (t--)
	{
		scanf("%d%d", &n, &m);
		for (i = 1; i <= n; i++)
			scanf("%d", &arr[i]);
 
		for (i = 1; i <= n; i++)
		{
			v = arr[i]; j = 0;
			qi[i] = 0;
			vax[i].clear();
			while (v != 1 && j < pr)
			{
				while (v%lis[j] == 0)
				{
					v = v / lis[j];
					vax[i].push_back(lis[j]);
				}
				j++;
			}
			if (v != 1)
				vax[i].push_back(v);
			vax[i].push_back(1);
 
		}
		bd(1, 1, n);
		while (m--)
		{
			scanf("%d%d%d", &c, &a, &b);
 
			if (!c)
				act(1, 1, n, a, b);
			else
				printf("%d\n", que(1, 1, n, a, b));
		}
	}
} 