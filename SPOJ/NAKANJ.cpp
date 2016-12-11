#include <stdio.h>
#include <math.h>
#include <queue>
#include <algorithm>
using namespace std;
struct ura {
	int x, y,z;
};
queue<ura>cola;
ura in, vo, aux,ot;
int i, s, x, v,j, u, y, h, r,ca, n,k,l, m, usa[10][10],arr[8][2] = { { -1,-2 },{ -1,2 },{ 1,-2 },{ 1,2 },{ 2,-1 },{ 2,1 },{ -2,-1 },{ -2,1 } };
char a[4], b[4];
bool ad(int x, int y)
{
	if (x > 0 && x < 9 && y>0 && y < 9)
		return true;
	return false;
}
int main()
{
	scanf("%d", &n);
	while (n--) {
		scanf("%s%s", &a, &b);
		in.x = a[0] - 'a'+1;
		in.y = a[1]-'0';
		vo.x = b[0] - 'a'+1;
		vo.y = b[1]-'0';
		r = 0;
		cola.push(in);
		
		for (i = 1; i < 9; i++)
			for (j = 1; j < 9; j++)
				usa[i][j] = 0;
		usa[in.x][in.y] = 1;
		while (!usa[vo.x][vo.y])
		{
			aux = cola.front();
			cola.pop();
			for (i = 0; i < 8; i++) {
				k = aux.x + arr[i][0];
				l = aux.y + arr[i][1];
				if (ad(k, l) && usa[k][l] == 0)
				{
					ot.x = k, ot.y = l; ot.z = aux.z + 1;
					usa[k][l] = 1;
					cola.push(ot);
					if (k == vo.x && l == vo.y)
						r = ot.z;
				}
			}
		}
		printf("%d\n",r);
		while (!cola.empty())
			cola.pop();
	}
} 