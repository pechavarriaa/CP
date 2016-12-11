#include <cstdio>
#include <algorithm>
using namespace std;
int i, j,v, k, n,t,arr[1010];
int main()
{	
	scanf("%d", &t);
	while (t--)
	{
		scanf("%d", &n);
		for (i = 0; i < n; i++)
			scanf("%d",&arr[i]);
		sort(arr, arr + n);
		j = 0;
		if (n & 1)
		{
			j = arr[0]-1;
			for (i = 1; i < n; i += 2)
				j = j ^ (arr[i+1] - arr[i] - 1);
		}
		else
			for (i = 0; i < n; i += 2)
				j = j ^ (arr[i+1] - arr[i] - 1);

		printf("%s",j?"Georgia will win\n":"Bob will win\n");
	}
}