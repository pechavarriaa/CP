#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
int i, j, n, l;
long long k, mod, v, p2, p5, acu;
int main() {
	scanf("%d", &l);
	while (l--)
	{
		scanf("%lld", &k);
		k--;
		v = k;
		while (v>0) {
			p2 = 1;
			p5 = 1;
			while (p5 <= v)
				p5 *= 5, i++;
				p5 /= 5;
			p2 = (long long)p2 << i;
			v = p2*p5;
			i = 0;
			acu += v;
			v = k - p5;
			k = v;
		}
		printf("%lld\n", acu);
		acu = 0;
	}
} 