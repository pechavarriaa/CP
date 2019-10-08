#include <stdio.h>
#include <math.h>
#include <algorithm>
using namespace std;
int i, a, b, c, q, n;
int main()
{
	b = -1;
	a = 1000000009;
	scanf("%d%d",&n,&q);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &c);
		a = min(a, c);
		b = max(b, c);
	}
	for (i = 0; i < q; i++)
	{
		scanf("%d",&c);
		printf("%s", (c >= a && c <= b) ? "Yes\n" : "No\n");
	}
}