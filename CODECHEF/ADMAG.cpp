#include <stdio.h>
int  i, t, m, j, p, L;
long long arr[100],n;
int main(){
	arr[0] = 1;
	arr[1] = 2;
	for (i = 2; i <= 88; i++)
		arr[i] = arr[i - 1] + arr[i - 2];
 
	scanf("%d", &t);
	while (t--)
	{
		scanf("%lld", &n);
		i = 0;
		while (arr[i] <= n)
			i++;
		printf("%d\n",i);
	}
} 
