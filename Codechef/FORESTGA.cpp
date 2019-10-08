#include <stdio.h>
#include <iostream>
#include <string>
#include <math.h>
#include <algorithm>
#include <map>
using namespace std;
long long i,c,d, j,n,can,m,y,res, t,w,l,h,r,k,a,b,al[100010][2];
int main() {			
	scanf("%lld", &n);
	scanf("%lld%lld", &w, &l);
	for (i = 0; i < n; i++)
		scanf("%lld%lld", &al[i][0], &al[i][1]);
	for (i = 0; i < n; i++)
	{
		c = l - al[i][0];
		d = al[i][1];
		a = (c + d - (c%d)) / d;
		c = c + w - l;
		b = (c + d - (c%d)) / d;
			res = max(res, max(a, b));
	}
	
	a = 0;
	b = res;
	res = 0;
	while (a<=b)
	{
		m = (a + b) / 2;
		can = 0;
		for (i = 0; i < n; i++) 
			if ((al[i][0] + al[i][1] * m) >= l) {
				can += al[i][0] + al[i][1] * m;
				if (can >= w)
					break;
			}
		
		if (can >= w) {
			if (res == 0)
				res = m;
			else
			res = min(res, m);
			b=m;
		}
		else
			a = m+1;
 
		if (a == b)
			break;
		
	}
	printf("%lld\n", res);
} 