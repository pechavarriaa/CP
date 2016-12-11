#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
int i,j,k,n,m,v;
char mat[200][200];
struct ura {
	int x, y;
}arr[201];
bool operator <(ura a, ura b) {
	return (a.y < b.y);
}
int main() {

	scanf("%d%d",&m,&n);
	for (i = 0; i < n; i++)
		scanf("%s",mat[i]);
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
			for (k = j + 1; k < m; k++)
				if (mat[i][j]>mat[i][k])
					v++;
		arr[i].x = i;
		arr[i].y = v;
		v = 0;
	}
	sort(arr, arr + n);
	for (i = 0; i < n; i++)
		printf("%s\n", mat[arr[i].x]);
}
