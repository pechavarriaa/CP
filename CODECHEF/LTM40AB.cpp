#include <cstdio>
#include <cstring>
#include <algorithm>
#define ll long long
using namespace std;
ll a, res,b,v, c, d, x, y, ot,t,n;
int main()
{
	scanf("%lld", &t);
	while (t--) {
		scanf("%lld%lld%lld%lld", &a, &b, &c, &d);
		c = max(c, a);
		b = min(b, d);
		res = (b-a+1)*(d-c+1);
		ot = (b - c + 1);
		if (ot > 1)
			ot = ((ot)*(ot +1)) / 2;
		else if (ot < 0)
			ot = 0;
		res = res - ot;
		if (a > d)
			res = 0;
		if (res < 0)res = 0;
		printf("%lld\n", res);
	}
}