#include <string>
#include <sstream>
#include <iostream>
#include <cstdio>
#include <string.h>
#include <algorithm>
using namespace std;
int  a,b,i,j,n,m,k,x,h,y,cn,cas;
int main() {
	
	scanf("%d",&cas);
	while(cas--){
		if (cn)
			printf("\n");
		scanf("%d", &a);
		printf("Scenario #%d:\n", ++cn);
		x = y = a + 1;
		b = a * 2 + 1;
		n = b;
		k = a; h = -1;
		for (i = 0; i < b; i++) {
			printf("slice #%d:\n", i + 1);
			if (k == 0)
				h++;
			for (j = 1; j <= n; j++) {
				for (m = 1; m <= n; m++)
				{
					if (k == 0)
						k = h;
					if (abs(j - x) + abs(m - y) + k <= a)
						printf("%d", abs(j - x) + abs(m - y)+k);
					else
						printf(".");
				}
				printf("\n");
			}
			k--;
			if (h>-1)
				k = 0;
		}
	}
}