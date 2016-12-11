#include <stdio.h>
#include <algorithm>
#include <math.h>
using namespace std;
int i, j, k, t, n, fg, m, mx, g, c, lt[1000], arr[3201], lim = 2400;
int main()
{
	for (i = 3; i*i <= lim; i = i + 2)
		if (arr[i] == 0)
			for (j = i; j*i <= lim; j += 2)
				arr[i*j] = 1;
	lt[0] = 2;
	k = 1;
	for (i = 3; i <= lim; i += 2) {
		if (!arr[i])
			lt[k] = i, k++;
	}
	i = 0;
	scanf("%d", &t);
	while (t--)
	{
		scanf("%d", &n);
		for (i = 0; lt[i] * lt[i] <= n; i++)
		{
			if ((n%lt[i]) == 0)
			{
				while ((n%lt[i]) == 0) {
					n /= lt[i];
				}
				if ((lt[i] % 4) == 1)
				{
					fg = 1; break;
				}
			}
		}
		if (fg)
			printf("YES\n");
		else
		{
			if (n > 1 && (n % 4) == 1)
				printf("YES\n");
			else
				printf("NO\n");
		}
		fg = 0;
	}
} 