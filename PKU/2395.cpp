#include <stdio.h>
#include <algorithm>
using namespace std;
#define maf 1000000000
#define max(a,b) (((a)>(b)) ? (a) : (b))
struct ura 
{
	long long x, y,z;
}arr[10010];
bool operator <(ura a,ura b)
{
	return (a.z < b.z);
}
int n, m,q,k,i,usa[10010];
long long a,b,cost;
int main()
{
	scanf("%d%d",&n,&m);
	for (i = 0; i < m; i++)
	{
		scanf("%lld%lld%lld", &a, &b,&cost);
		if (cost > maf)
			continue;
		arr[k].x = a, arr[k].y = b, arr[k++].z = cost;
	}
	sort(arr, arr + k);
	usa[1] = 1; cost = -1;
	while (q < n - 1)
	{
		for (i = 0; i < k; i++)
		{
			a = arr[i].x;
			b = arr[i].y;
			if (!(usa[a] + usa[b] == 1))
				continue;
			usa[a] = usa[b] = 1;
			cost = max(cost, arr[i].z);
			q++;
			i = k + 1;
		}
	}
	printf("%lld\n", cost);
}