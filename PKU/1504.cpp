#include <iostream>
#include <cstdio>
#include <string.h>
#include <algorithm>
using namespace std;
long long a,b,i,j,k,l,n,m,v,arr1[130],arr2[130],n1,n2;
int sol;
int main() {
	scanf("%lld", &v);
	while (v--) {
		scanf("%lld%lld", &a, &b); i = j = 0;
		while (a) {
			arr1[i++] = a % 10;
			a /= 10;
		}
		while (b) {
			arr2[j++]= b % 10;
			b /= 10;
		}
		n1 = 0, n2 = 0;
		for (k = 0; k < i; k++)
			n1 = n1 * 10 + arr1[k];
		for (l = 0; l < j; l++)
			n2 = n2 * 10 + arr2[l];
		n1 = n1 + n2;
		i = 0;
		while (n1) {
			arr1[i++] = n1 % 10;
			n1 /= 10;
		}
		n2 = 0;
		for (k = 0; k < i; k++)
			n2 = n2 * 10 + arr1[k];
		printf("%lld\n", n2);	
	}
}