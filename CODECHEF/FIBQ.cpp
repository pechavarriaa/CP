#include <stdio.h>
#include <time.h>
#include <iostream>
#include <stdlib.h>
#include <algorithm>
using namespace std;
const int E = 200000;
int tree[4 * E], A[E];
long long i, j, p, a, b, n, m, t, mod = 1e9 + 7;
long long pw[210012];
char f[2];
class mat
{
public:
	long long m[2][2];
}arr, arb[530120];
mat operator +(mat a, mat b)
{
	mat c;
	c.m[0][0] = (a.m[0][0] + b.m[0][0]) % mod;
	c.m[0][1] = (a.m[0][1] + b.m[0][1]) % mod;
	c.m[1][0] = (a.m[1][0] + b.m[1][0]) % mod;
	c.m[1][1] = (a.m[1][1] + b.m[1][1]) % mod;
	return c;
}
mat operator *(mat a, mat b)
{
	mat c;
	c.m[0][0] = ((a.m[0][0] * b.m[0][0]) % mod + (a.m[0][1] * b.m[1][0]) % mod) % mod;
	c.m[0][1] = ((a.m[0][0] * b.m[0][1]) % mod + (a.m[0][1] * b.m[1][1]) % mod) % mod;
	c.m[1][0] = ((a.m[1][0] * b.m[0][0]) % mod + (a.m[1][1] * b.m[0][1]) % mod) % mod;
	c.m[1][1] = ((a.m[1][0] * b.m[0][1]) % mod + (a.m[1][1] * b.m[1][1]) % mod) % mod;
	return c;
 
}
mat ex(mat a, long long y)
{
	mat w = a;
	mat v = a;
	while (y)
	{
		if (y % 2)
			w = w*v;
		v = v*v;
		y /= 2;
	}
	return w;
}
void build(int node, int start, int end)
{
	if (start == end)
		arb[node]=ex(arr,pw[start]-1);
	else
	{
		int mid = (start + end) / 2;
		build(2 * node, start, mid);
		build(2 * node + 1, mid + 1, end);
		arb[node] = arb[2 * node] + arb[2 * node + 1]+ arb[2 * node]*arb[2 * node + 1];
	}
}
void update(int node, int start, int end, int idx, int val)
{
 
	if (start == end)
	{
		arb[node] = ex(arr, val - 1);
	}
	else
	{
		int mid = (start + end) / 2;
		if (start <= idx  && idx <= mid)
		{
			// If idx is in the left child, recurse on the left child
			update(2 * node, start, mid, idx, val);
		}
		else
		{
			// if idx is in the right child, recurse on the right child
			update(2 * node + 1, mid + 1, end, idx, val);
		}
		// Internal node will have the fib of both of its children
		arb[node] = arb[2 * node] + arb[2 * node + 1]+ arb[2 * node] * arb[2 * node + 1];
	}
}
mat res(int node, int start, int end,int a,int b)
{
	mat x, y;
	if (start >= a && end <= b)
		return arb[node];
	else
	{
		int med = (start+ end) / 2;
		if (med + 1 > b || end < a)
			return res(node * 2, start, med, a, b);
		else
			if (start > b || med < a)
				return res(node * 2 + 1, med + 1, end, a, b);
			else
			{
				x = res(node * 2, start, med, a, b);
				y = res(node * 2 + 1, med + 1, end, a, b);
				return x + y + x*y;
			}
	}
}
mat e, k, v, z;
int main() {
	arr.m[0][0] = 1;
	arr.m[0][1] = 1;
	arr.m[1][0] = 1;
	arr.m[1][1] = 0;
	scanf("%d%d", &n, &m);
	for ( i = 1; i <=n; i++)
			scanf("%lld",&pw[i]);
	build(1, 1, n);
	for (i = 1; i <= m; i++)
	{
		scanf("%s",f);
		scanf("%lld%lld",&a,&b);
		if (f[0] == 'C')
			update(1, 1, n, a, b);
		else
			printf("%lld\n",res(1,1,n,a,b).m[1][0]);
	}
} 