#include <cmath>
#include <cstdio>
#include <vector>
#include <queue>
#include <iostream>
#include <string>
#include <map>
#include <algorithm>
using namespace std;
struct ura {
	long long d, c;
}ch[600010],yu,wx,wy,rew;
struct pp 
{
	long long d, c, o, b;
}fl[600010],qq;
long long t,k,i,res,j,q,c2,c5,s,n,l,r,y,m,arr[100010],cm2[100010],cm5[100010];
long long u;
void ac(int n, int l, int r, int a, int b, int o,ura yu) 
{
	if (fl[n].o)
	{
		int x = n * 2, y = n * 2 + 1;
		if (fl[n].o == 1)
		{
			ch[n].c = ch[n].c + fl[n].c*(r-l+1);
			ch[n].d = ch[n].d + fl[n].d*(r-l+1);
			if (fl[x].o == 0)
				fl[x].o = 1;
				fl[x].c += fl[n].c, fl[x].d += fl[n].d;
			if (fl[y].o == 0)
				fl[y].o = 1;
				fl[y].c += fl[n].c, fl[y].d += fl[n].d;
	   	}
		else
		{
			ch[n].d = fl[n].d*(r - l + 1) + cm2[r-fl[n].b+1] - cm2[l-fl[n].b];
			ch[n].c = fl[n].c*(r -l+1) + cm5[r - fl[n].b + 1] - cm5[l - fl[n].b];
			fl[x] = fl[n];
			fl[y] = fl[x];
		}
		fl[n].c = fl[n].d = fl[n].b = fl[n].o = 0;
	}
	if (l > b || r < a)
		return;
	if (l >= a && r <= b)
	{
		int x = 2 * n, y = 2 * n + 1;
		
		if (o == 2)
		{
			ch[n].d = yu.d*(r - l + 1) + cm2[r - a + 1] - cm2[l - a];
			ch[n].c = yu.c*(r - l + 1) + cm5[r - a + 1] - cm5[l - a];
			fl[x].b = a, fl[x].o = 2, fl[x].c = yu.c, fl[x].d = yu.d;
			fl[y].b = a, fl[y].o = 2, fl[y].c = yu.c, fl[y].d = yu.d;
		}
		else
		{
			ch[n].c += yu.c*(r - l + 1), ch[n].d += yu.d*(r - l + 1);
			fl[x].c += yu.c, fl[x].d += yu.d;
			fl[y].c += yu.c, fl[y].d += yu.d;
			if (fl[x].o != 2)
				fl[x].o = 1;
			if (fl[y].o != 2)
				fl[y].o = 1;
		}
	}
	else
	{
		ac(n * 2, l, (l + r) / 2, a, b, o,yu);
		ac(1+n * 2, 1+ (l + r) / 2, r, a, b, o,yu);
		ch[n].c = ch[n * 2].c + ch[n * 2 + 1].c;
		ch[n].d = ch[n * 2].d + ch[n * 2 + 1].d;
	}
}
ura qu(int n, int l, int r, int a, int b)
{
	if (l > b || r < a)
		return rew;
	if (l >= a && r <= b)
		return ch[n];
	else
	{
	ura	wx = qu(n * 2, l, (l + r)/2, a, b);
	ura	wy = qu(n * 2 + 1, 1+(l + r) / 2, r, a, b);
		wx.c += wy.c;
		wx.d += wy.d;
		return wx;		
	}
}
void bd(int n, int l, int r)
{
	if (l == r)
	{
		c2 = 0,c5 = 0, s = 2;
		while (arr[l] % s == 0)
			s=s*2,c2++;
		s = 5;
		while (arr[l] % s == 0)
			s = s * 5,c5++;
		ch[n].c = c5;
		ch[n].d = c2;
	}
	else
	{
		bd(n * 2, l, (l + r) / 2);
		bd(n * 2 + 1, 1 + (l + r) / 2, r);
		ch[n].c = ch[n * 2].c + ch[n * 2 + 1].c;
		ch[n].d = ch[n * 2].d + ch[n * 2 + 1].d;
	}
}
int main()
{
	rew.c = rew.d = 0;
	t = 100000;
	for (i = 2; i <= t; i *= 2)
		for (j = 1; j*i <= t; j++)
			cm2[i*j]++;
 
	for (i = 5; i <= t; i *= 5)
		for (j = 1; j*i <= t; j++)
			cm5[i*j]++;
 
	for (i = 2; i <= t; i++)
		cm5[i] += cm5[i - 1], cm2[i] += cm2[i - 1];
 
	scanf("%lld", &t);
	while (t--)
	{
		for (i = 0; i < 600010; i++)
			fl[i] = qq;
		u = 0;
		scanf("%lld%lld", &n, &m);
		for (i = 0; i < n; i++)
			scanf("%lld", &arr[i + 1]);
		bd(1, 1, n);
		while (m--)
		{
			scanf("%lld", &q);
			if (q == 1) 
			{
				scanf("%lld%lld%lld", &l, &r, &y);
				c2 = 0; c5 = 0;
				s = 2;
				while (y % s == 0)
					s = s * 2,c2++;
				s = 5;
				while (y % s == 0)
					s = s * 5,c5++;
				yu.c = c5;
				yu.d = c2;
				if(yu.c+yu.d>0)
				ac(1, 1, n, l, r, 1, yu);			
			}
			if (q == 2)
			{
				scanf("%lld%lld%lld", &l, &r, &y);
				c2 = 0; c5 = 0;
				s = 2;
				while (y % s == 0)
					s = s * 2, c2++;
				s = 5;
				while (y % s == 0)
					s = s * 5, c5++;
				yu.c = c5;
				yu.d = c2;
				ac(1, 1, n, l, r, 2, yu);
			}
			if (q == 3) 
			{
				scanf("%lld%lld",&l,&r);
				ac(1, 1, n, l, r, 1, { 0,0 });
				wx = qu(1, 1, n, l, r);
				u+= min(wx.c, wx.d);
			}
		}
		printf("%lld\n", u);
	}
}