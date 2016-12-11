#include <cstdio>
#include <algorithm>
using namespace std;
int n, k, q, t, j,i,ma,a,b, l, fg, al[350],arr[350], mat[150][150];
char s[10010];
bool ch(int i, int j)
{
	if (i < t && i >= 0 && j >= 0 && j <= i)
		return 1;
		return 0;
}
int main()
{
	scanf("%d",&t);
	for (i = 0; i < t; i++)
		for (j = 0; j <= i; j++)
			scanf("%d",&mat[i][j]);
	
	for(i=1;i<t;i++)
		for (j = 0; j <= i; j++)
		{
			a = 0;
			b = 0;
			if (ch(i - 1, j))
				a = mat[i - 1][j];
			if (ch(i - 1, j - 1))
				b = mat[i - 1][j - 1];
			mat[i][j] += max(a, b);
			ma = max(ma, mat[i][j]);
		}
	printf("%d\n", ma);
}
