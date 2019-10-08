#include <bits/stdc++.h>
#define min(a,b) ((a<b)?(a):(b))
using namespace std;
int i, j,w, k,t,p,u,z,n,fg,c;
int arr[110][10],lis[110];
int main() 
{
	scanf("%d", &t);
	while (t--)
	{
		scanf("%d", &n);
		for (z = 0; z < n; z++)
		{
			scanf("%d", &c);
			lis[z] = c;
			for (i = 0; i < c; i++) 
			{
				scanf("%d", &w);
				arr[z][w]++;
			}
		}
		for (i = 0; i < n; i++)
		{
			z=1;
			while (z) 
			{
				z = 0;
				for (j = 1; j < 7; j++)
				{
					z += (arr[i][j] > 0);
					if (arr[i][j])
					arr[i][j]--;
				}
				if (z == 4)
					lis[i]++;
				if (z == 5)
					lis[i] += 2;
				if (z == 6)
					lis[i] += 4;
			}
		}
		u = -1;
		for (i = 0; i < n; i++) {
			if (u < lis[i])
				u = lis[i], z = i;
		}
		u = 0;
		for (i = 0; i < n; i++)
			if (lis[i] == lis[z])
				u++;
			
		if (u > 1)
			printf("tie\n");
		else
		{
			if (!z)
				printf("chef\n");
			else
				printf("%d\n", z + 1);
		}
	}
}