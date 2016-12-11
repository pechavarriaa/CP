#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
long long i,q, res,j, k,r, t,d,f[101];
void fun(long long x,int k,int i)
{
	int j;
	if (x == 0)
		res++;
	else 
	{
		if (f[i] * k < x)
			return;
		for (j = i; j > 0; j--) {
			if (x - f[j] > 0)
				fun(x - f[j], k - 1, j);
			else
			if ((x - f[j] == 0) && k == 1)
				fun(0, 0, i);
		}
	}
 
}
int main() {
	f[1] = 1; f[0] = 1;
	for (i = 2; i<45; i++)
		f[i] += f[i - 1] + f[i - 2];
	scanf("%lld", &q);
	while (q--)
	{
		scanf("%lld%lld", &r, &k);
		i = 0;
		res = 0;
		while (f[i] < r)
			i++;
		if (k == 1) {
			if(f[i]==r)
			printf("%d\n", 1);
			else printf("%d\n", 0);
			continue;
		}
		else
		fun(r, k, i - 1);
		printf("%lld\n", res);
 
	}	
}
 