#include <cstdio>
#include <algorithm>
#define min(a,b) ((a<b)?(a):(b))
#define oo -10000000
int i, j,v, n,k,t,a,c,b,res,arr[10100],war[10100];
using namespace std;
int main() 
{
	scanf("%d", &t);
	while (t--)
	{
		v = 0;
		scanf("%d%d%d", &n, &a, &b);
	 		for (i = 0; i < n; i++)
			{
				scanf("%d", &arr[i]);
				war[i] = 0;
			}
			v = n;
		sort(arr, arr + v);
		
		war[v - 1] = arr[v - 1];
		for (i = v - 2; i >= 0; i--)
		{
			j = i + 1; k = oo;
			while (j < v && arr[j]-arr[i]<=b )
			{
				if (arr[j] - arr[i] >= a)
				k = max(k, war[j]);
				j++;
			}
			if (k==oo)
				war[i] = arr[i];
			else
				war[i] = arr[i]-k;
		}
		res = oo;
		for (i = 0; i < v; i++)
		{
			if (arr[i] >= a && arr[i] <= b)
				res = max(res, war[i]);
		}
		if (res != oo)
			printf("%d\n", res);
		else
			printf("%d\n", 0);
	}
}