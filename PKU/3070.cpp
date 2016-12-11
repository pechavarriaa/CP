#include <stdio.h>
#include <time.h>
#include <iostream>
#include <stdlib.h>
#include <algorithm>
using namespace std;
int i, j, k,p,n,t,mod= 10000;
class mat {
public:
	long long m[2][2];
}arr[10000];
mat operator *(mat a, mat b)
{
	mat c;
	c.m[0][0] = ((a.m[0][0] * b.m[0][0])%mod + (a.m[0][1] * b.m[1][0])%mod)%mod;
	c.m[0][1] = ((a.m[0][0] * b.m[0][1])%mod + (a.m[0][1] * b.m[1][1])%mod)%mod;
	c.m[1][0] = ((a.m[1][0] * b.m[0][0])%mod + (a.m[1][1] * b.m[0][1])%mod)%mod;
	c.m[1][1] = ((a.m[1][0] * b.m[0][1])%mod + (a.m[1][1] * b.m[1][1])%mod)%mod;
	return c;

}
mat exp(mat a, long long y)
{
	mat w=a;
	mat v = a;
	while (y)
	{
		if (y % 2)
			w=w*v;
		v = v*v;
		y/=2;
	}
	return w;
}
mat e;
int main() {
	arr[0].m[0][0] = 1;
	arr[0].m[0][1] = 1;
	arr[0].m[1][0] = 1;
	arr[0].m[1][1] = 0;
	while (scanf("%d", &p)&& p>=0) {
	//	scanf("%d", &p);
		if (!p)
			printf("%d\n", 0);
		else
		{
			e = exp(arr[0], p - 1);
			printf("%d\n", e.m[1][0]);
		}
	}
}