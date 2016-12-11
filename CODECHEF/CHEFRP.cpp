#include <stdio.h>
#include <algorithm>
using namespace std;
int i, n=10000000, t, k, x, y;
long long w;
int main(){
	scanf("%d", &t);
	while (t--){
		scanf("%d", &k);
		while (k--){
			scanf("%d", &x);
			w += x;
			if (x < n)
				n = x;
		}
		w -= n;
		if (n != 1)
			printf("%d\n", w + 2);
		else
			printf("%d\n", -1);
		w = 0;
		n = 10000000;
	}
} 