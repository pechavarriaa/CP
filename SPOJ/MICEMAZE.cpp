#include <stdio.h>
#include <math.h>
int i, j, k;
int a,b, e,t,m, s, error, w,n,c,z,x,y,usa[105],arr[200][200],oo=999999999;
void dij(int v,int n)
{
	int u=v-1,k=oo, x = 0,fg=0;
	usa[u] = 1; 
	while (w<4)
	{
		k = oo; fg = 0; w++;
		for (i = 0; i < n; i++)
			if(!usa[i] && arr[u][i]<k){
				k = arr[u][i];
				x = i;
				fg = 1;
				w--;
			}
		if (fg)
		{
			usa[x] = 1;
			for (i = 0; i < n; i++)
				if (arr[u][i]>arr[x][i] + k)
					arr[u][i] = arr[x][i] + k;
		}
	}
	
}
int main()
{
	scanf("%d%d%d%d", &n,&e,&t,&m);
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
			if (i == j)
				arr[i][i] = 0;
			else
				arr[i][j] = oo;
	for (i = 0; i < m; i++)
	{
		scanf("%d%d%d", &a, &b, &s);
		arr[b-1][a-1] = s;
	}
	dij(e,n);
	for (i = 0; i < n; i++)
		if (e-1 != i && arr[e-1][i] <= t)
			c++;
	printf("%d\n", 1+c);
} 