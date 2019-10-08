#include <stdio.h>
#include <vector>
#include <string.h>
#include <algorithm>
using namespace std;
long long t, a, b, n, m;
int main()
{
	scanf("%lld",&t);
	while (t--)
	{
		scanf("%lld%lld", &n, &m);
		if (n == 1 || m == 1)
		{
			if (n + m == 3)
				printf("Yes\n");
			else
				printf("No\n");
		}
		else
		{
			a = m % 2;
			b = n % 2;
			if (a + b > 1)
				printf("No\n");
			else
				printf("Yes\n");
		}
	}
} 