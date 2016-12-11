#include <cstdio>
#include <iostream>
#include <vector>
#include <stack>
#include <string.h>
#include <algorithm>
using namespace std;
int i, y,j,t,l,n,k;
int main()
{
 
	scanf("%d", &t);
	while (t--) {
		j =k=y=0;
		scanf("%d", &n);
		for (i = 0; i < n; i++) {
			scanf("%d", &l);
			if (l == 2)
				y=1;
			k += l;
			if (l == 5)
				j = 1;
		}
		k /= n;
		if (k >= 4 && j && !y)
			printf("Yes\n");
		else
			printf("No\n");
	}
} 