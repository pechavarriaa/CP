#include <iostream>
#include <cstdio>
#include <string.h>
#include <algorithm>
using namespace std;
long long i,j,k,n,m,v,arr[30],tam[11005];
int sol;
int main() {
	scanf("%lld",&n);
	for (v = n; v>0; v--) {
		k = v;
		while (m < n && k>0) {
			m += k;
			k--;
		}
		if (m == n)
			sol++;
		m = 0;
	}
	printf("%lld\n", sol);
} 