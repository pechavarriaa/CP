#include <iostream>
#include <queue>
#include <algorithm>
#include <cmath>
#include <cstdio>
using namespace std;
const int A = 99999;
int arr[105][105], usa[105][105],usas[105][105], pab[105][105];
int i, j, x, y, n, m, k, v, res, k1, k2, s, t;
struct ura {
	int x, y, z;
}ot, ww;
queue<ura>cola;
bool ad(int q, int w) {
	if (q >= 0 && w >= 0 && q<n && w<m)
		return true;
	return false;
}
int main() {
	scanf("%d", &t);
	while (t--)
	{
		scanf("%d%d%d%d", &n, &m, &k1, &k2);
		for (i = 0; i<n; i++)
			for (j = 0; j<m; j++)
				scanf("%d", &arr[i][j]);
		usa[0][0]++;
		ot.z = 0; ot.x = 0; ot.y = 0;
		cola.push(ot);
		while (!cola.empty())
		{
			ww = cola.front();
			cola.pop();
			for (k = -k1; k<k1 + 1; k++)
				for (v = -k1; v<k1 + 1; v++)
				{
					if (abs(k) + abs(v)>k1)
						continue;
					x = ww.x + k;
					y = ww.y + v;
					if (ad(x, y) && !arr[x][y] && !usa[x][y])
					{
						ot.x = x;
						ot.y = y;
						ot.z = ww.z + 1;
						usa[x][y]++;
						pab[x][y] = ot.z;
						cola.push(ot);
					}
				}
		}
		ot.z = 0; ot.x = 0; ot.y = m - 1;
		usas[0][m - 1]++;
		cola.push(ot);
		while (!cola.empty()) {
			ww = cola.front();
			cola.pop();
			for (k = -k2; k<k2 + 1; k++)
				for (v = -k2; v<k2 + 1; v++)
				{
					if (abs(k) + abs(v)>k2)
						continue;
					x = ww.x + k;
					y = ww.y + v;
					if (ad(x, y) && !arr[x][y] && !usas[x][y])
					{
						ot.x = x;
						ot.y = y;
						ot.z = ww.z + 1;
						usas[x][y]++;
						pab[x][y] = max(ot.z, pab[x][y]);
						cola.push(ot);
					}
				}
		}
		res = A;
		for (i = 0; i<n; i++)
			for (j = 0; j<m; j++) {
				if (usa[i][j] && usas[i][j])
					res = min(pab[i][j], res);
				usa[i][j] = usas[i][j]=pab[i][j] = 0;
			}
 
		if (res == A)
			printf("-1\n");
		else
			printf("%d\n", res);
	}
} 