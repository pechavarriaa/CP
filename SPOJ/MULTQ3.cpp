#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
const int A = 100009;
struct ura {
	int a, b, c;
};
int  fl[10 * A];
int i,n,q,a,b,c;
ura arb[10 * A],ot;
ura operator +(ura x, ura y) {
	ura z;
	z.a = x.a + y.a;
	z.b = x.b + y.b;
	z.c = x.c + y.c;
	return z;
}
void bd(int node, int a, int b)
{
	if (a == b)
		arb[node].a=1;
	else
	{
		int mid = (a + b) / 2;
		bd(node * 2, a, mid);
		bd(node * 2 + 1, mid + 1, b);
		arb[node] = arb[2 * node] + arb[2 * node + 1];
	}
}
int que(int node, int a, int b, int ini, int fin)
{
	if (b<ini || a>fin)
		return 0;
	
	if (fl[node]) {
		if (a != b)
			fl[node * 2] = (fl[node * 2] + fl[node])%3, fl[node * 2+1] = (fl[1+node * 2] + fl[node]) % 3;
		for (int i = 0; i < fl[node]; i++) {
			ot.c = arb[node].b;
			ot.b = arb[node].a;
			ot.a = arb[node].c;
			arb[node] = ot;
		}
		fl[node] = 0;
	}
	if (a >= ini && b <= fin) 
		return arb[node].a;
	
		int mid = (a + b) / 2;
		int p = que(2 * node, a, mid, ini, fin);
		int q = que(2 * node + 1, mid + 1, b, ini, fin);
		return p + q;
}
void upr(int node, int a, int b, int l, int r) {
	if (fl[node]) {
		if (a != b)
			fl[node * 2] = (fl[node * 2] + fl[node]) % 3, fl[node * 2 + 1] = (fl[1 + node * 2] + fl[node]) % 3;
		for (int i = 0; i < fl[node]; i++) {
			ot.c = arb[node].b;
			ot.b = arb[node].a;
			ot.a = arb[node].c;
			arb[node] = ot;
		}
		fl[node] = 0;
	}
	if (a > r || b < l)
		return;
	if (a >= l && b <= r)
	{
		ot.c = arb[node].b;
		ot.b = arb[node].a;
		ot.a = arb[node].c;
		arb[node] = ot;
		if (a != b)
			fl[2 * node]=(fl[2 * node]+1)%3,fl[2*node + 1]=(fl[2*node+1]+1)%3;
		return;
	}
	int mid = (a + b) / 2;
	upr(node * 2, a, mid, l, r);
	upr(node * 2 + 1, mid + 1, b, l, r);
	arb[node] = arb[node * 2] + arb[1 + node * 2];
}
int main() {
	scanf("%d%d",&n,&q);
	bd(1, 1, n);
	while (q--) {
		scanf("%d%d%d",&a,&b,&c);
		if (a)
			printf("%d\n", que(1, 1, n, b+1, c+1));
		else
			upr(1, 1, n, b+1, c+1);
	}
} 