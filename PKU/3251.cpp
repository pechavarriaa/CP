#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
int i, j, k, l, m, a, b, fg, v, c, x, y, z, mas;
char arr[150][150];
bool ad(int x, int y) {
	if ((x >= 0 && x < k) && (y >= 0 && y < k))
		return true;
	return false;
}
int main() {
	scanf("%d", &k);
	for (i = 0; i < k; i++)
		scanf("%s", arr[i]);

	for (i = 0; i < k; i++)
		for (j = 0; j < k; j++)
			if (arr[i][j] == 'J')
			{
				for (l = i; l < k; l++)
					for (m = j; m < k; m++)
						if (arr[l][m] == 'J' && ((l-i)*(l-i)+(m-j)*(m-j))>mas)
						{
							c = 2;
							a = l - i;  fg = 0;
							b = m - j;
							v = i + b, x = j - a;
							y = l + b, z = m - a;
							if (ad(v, x) && ad(y, z)) {
								if (arr[v][x] == 'J' || arr[y][z] == 'J')
									c++;
								if (arr[v][x] == 'B' || arr[y][z] == 'B')
									fg = 1;
							}
							if (!fg && c>2)
								mas = max(a*a + b*b, mas);
							fg = 0, c = 2;
							v = i - b, x = j + a;
							y = l - b, z = m + a;
							if (ad(v, x) && ad(y, z)) {
								if (arr[v][x] == 'J' || arr[y][z] == 'J')
									c++;
								if (arr[v][x] == 'B' || arr[y][z] == 'B')
									fg = 1;
							}

							if (!fg && c>2)
								mas = max(a*a + b*b, mas);
						}
			}
	printf("%d\n", mas);
}