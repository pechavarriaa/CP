#include <cstdio>
#include <iostream>
#include <vector>
#include <stack>
#include <string.h>
#include <algorithm>
using namespace std;
int i, y,j,t,l,n,k,a,b;
long long arr[100010],lt[100010],oo,sum;
char st[100010];
int main()
{
	scanf("%d",&t);
	while (t--) {
		k = 0;
		scanf("%d", &n);
		scanf("%s", st);
		for (i = 0; i < n; i++)
			scanf("%lld", &arr[i]);
		for (i = 0; i < n; i++)
		{
			if (st[i] == '1')
				lt[k++] = i;
		}
		if (k == n)
		{
			printf("0\n");
			continue;
		}
		a = lt[0];
		b = lt[k - 1];
		for (i = 0; i < a; i++)
			sum += arr[i + 1] - arr[i];
		
		for (i = b+1; i < n; i++)
			sum += arr[i] - arr[i-1];
		i = 0;
		while (i + 1 < k)
		{
			a = lt[i];
			b = lt[i + 1];
			while (a+1<b)
			{
				if (arr[a + 1] - arr[a] < arr[b] - arr[b - 1])
					sum += arr[a + 1] - arr[a], a++;
				else
					sum += arr[b] - arr[b-1], b--;
			}
			i++;
		}
		printf("%lld\n",sum);
		sum = 0;
	}
} 