#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
long long a,b,c,d,x,y,p;
int main() {
	scanf("%I64d", &p);
	while (p--) {
		scanf("%lld",&a);
		x = 1;
		while (1) {
			y = x * 2;
			if (a%y == x) {
				printf("%lld %lld\n", a + 1 - x, a - 1 + x);
				break;
			}
			x = x * 2;
		}
	}
}