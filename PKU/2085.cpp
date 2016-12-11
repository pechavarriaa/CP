#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <cstdio>
using namespace std;
long long i,n,m,sw,a,b,j,arr[50010];
long long v,con,sum, ot,tr[50010];
int main()
{
	v = 50000; i = 1;
	v = v*(v - 1) / 2;
	while (con < v) {
		con += i;
		tr[i+1] = con;
		i++;
	}
	while (scanf("%lld%lld", &n, &m) && n + m>0) {
			i = 0;
		while (tr[i]+i<m)
			i++;
		for (j = 1; j <= n; j++)
			arr[j - 1] = j;
		reverse(arr+(n-i), arr+n);
		a = n - i - 1;
		b = m - tr[i];
		sw = n-1;
		for (j = 0; j < b; j++) {
			swap(arr[a], arr[sw--]);
		}
		for (i = 0; i < n; i++)
			printf("%d ", arr[i]);
		printf("\n");
	}
}