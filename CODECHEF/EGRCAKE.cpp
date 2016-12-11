#include <stdio.h>
#include <string.h>
#include <math.h>
#include <algorithm>
using namespace std;
long long i, j, k, q, n, t, m, num;
long long  lcm(long long a, long long b)
{
	long long  d;
	while (a%b != 0)
	{
		d = a%b;
		a = b;
		b = d;
	}
	return(b);
}
int main()
{
	scanf("%lld", &t);
	while (t--) {
		scanf("%lld%lld", &n, &m);
		if (n>1 && m == 0)
			printf("No %d\n", 1);
		else if(n==1 && !m)
			printf("Yes\n");
		else {
			k = lcm(m, n);
			if (k == 1)
				printf("Yes\n");
			else
				printf("No %lld\n", n / k);
		}
	}
 
} 