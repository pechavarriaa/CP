#include <cstdio>
int arr[2][20010];
int t, i, n, j;
long long sum1,sum2;
int main() {

	scanf("%d", &t);
	while (t--)
	{
		sum1 = sum2 = 0;
		scanf("%d", &n);
		for (i = 0; i < 2; i++)
			for (j = 0; j < n; j++)
				scanf("%d", &arr[i][j]);

		for (i = 0; i < 2; i++)
			for (j = 0; j < n; j++)
			{
				if ((i + j) & 1)
					sum1 += arr[i][j];
				else
					sum2 += arr[i][j];
			}
		printf("%lld\n", ((sum1<sum2)?sum1:sum2));
	}
}