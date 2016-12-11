#include <stdio.h>
#include <math.h>
#include <algorithm>
using namespace std;
int i,a,c,res,sum,u,b,x,z,v,k,n,fg,j,lee[103],usa[100000][105],arr[1121020][2];
int main()
{
	scanf("%d", &n);
	for (i = 0; i < n;i++)
	{
		scanf("%d", &lee[i]);
		sum += lee[i];
	}
	k = (sum+1) / 2 ;
	c = (n+1) / 2 ; v = 1; u = 0;
	for (i = 0; i <n ;i++)
	{
		for (j = 0; j < v; j++)
		{
			z = arr[j][0] + lee[i];
			x = arr[j][1] + 1;
			if (z <= k && usa[z][x]==0)
			{
				u++;
				arr[u][0] = z;
				arr[u][1] = x;
				usa[z][x] = 1;
			}
		}
		v = u+1;
	} 
	for (i = 1; i <= v; i++)
	{
		if ((n+1)/2==(arr[i][1]) || n/2==(arr[i][1]))
			b = max(b, arr[i][0]);
	}
	printf("%d %d\n", b, sum - b);
}