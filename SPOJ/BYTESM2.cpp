#include <iostream>
#include <cstdio>
#define big(a,b) ((a>b)?(a):(b))
int arr[102][102];
int t, i, j,n,m,ts;
int main() {
	scanf("%d", &t);
	while (t--)
	{
		scanf("%d%d", &n, &m);
		for (i = 1; i <= n; i++)
			for (j = 1; j <= m; j++)
				scanf("%d", &arr[i][j]);
		ts = -1;
		for (i = 2; i <= n; i++)
			for (j = 1; j <= m; j++) 
				arr[i][j] += big(arr[i - 1][j], big(arr[i - 1][j - 1], arr[i - 1][j + 1])),ts=big(arr[i][j],ts);

		printf("%d\n", ts);

	}
}