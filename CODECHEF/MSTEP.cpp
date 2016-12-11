#include <stdio.h>
#include <algorithm>
#include <queue>
using namespace std;
int i, j, k, b,s, c,t,n,fk,mn,ft;
int arr[502][502],d[250003][2];
int main()
{
	scanf("%d",&t);
	while (t--) {
		c = 0;
		for (i = 1; i <= n; i++)
			d[i][0] = 0,d[i][1]=0;
 
		scanf("%d",&n);
		for (i = 1; i <= n; i++)
			for (j = 1; j <= n; j++) {
				scanf("%d", &arr[i][j]);
				d[arr[i][j]][0] = i;
				d[arr[i][j]][1] = j;
			}
 
		for (i = 1; i < n*n; i++)
			c += abs(d[i][0] - d[i + 1][0]) + abs(d[i][1] - d[i + 1][1]);
 
		printf("%d\n",c);
	}
} 