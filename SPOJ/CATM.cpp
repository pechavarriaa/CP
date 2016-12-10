#include <queue>
#include <stdio.h>
using namespace std;
struct ura{
	int x, y,d;
};
queue<ura> qr, qg, qg2;
ura w1,w2,aux1,aux2,w3,aux3;
int xr, yr, xg1, yg1, xg2, yg2, fg1, fg2;
int i, j, k,z,e, t,l, n,m, r[101][101], g1[101][101], g2[101][101], usr[101][101], usg1[101][101], usg2[101][101];
int v[4][2] = { { 1, 0 }, { -1, 0 }, { 0, 1 }, { 0, -1 } };
bool dentro(int x, int y,int a,int b){
	if (x >= 1 && x <= a && y >= 1 && y <= b)
		return true;
		return false;
}
int main()
{
	scanf("%d%d", &n, &m);
	scanf("%d", &t); e = t ;
	z = n*m - 1;
	while (t>0){
		fg2 = 0,fg1=0;
		scanf("%d%d%d%d%d%d", &xr, &yr,&xg1, &yg1, &xg2, &yg2);
		aux1.x = xg1, aux1.y = yg1,aux1.d=0;
		qg.push(aux1);
		usg1[aux1.x][aux1.y] = 1;
		aux2.x = xg2, aux2.y = yg2,aux2.d=0;
		qg2.push(aux2);
		usg2[aux2.x][aux2.y] = 1;
		aux3.x = xr, aux3.y = yr, aux3.d = 0;
		qr.push(aux3);
		usr[aux3.x][aux3.y] = 1;
		while (1){
			w1 = qg.front();
			w2 = qg2.front();
			w3 = qr.front();
			qg.pop();
			qg2.pop();
			qr.pop();
			for (k = 0; k < 4; k++){
				if (dentro(w1.x + v[k][0], w1.y + v[k][1], n, m) && usg1[w1.x + v[k][0]][w1.y + v[k][1]] == 0)
				{
					aux1.x = w1.x + v[k][0], aux1.y = w1.y + v[k][1], aux1.d = w1.d + 1;
					usg1[aux1.x][aux1.y] = 1, g1[aux1.x][aux1.y] = aux1.d;
					qg.push(aux1);
					fg1++;
				}
				if (dentro(w2.x + v[k][0], w2.y + v[k][1], n, m) && usg2[w2.x + v[k][0]][w2.y + v[k][1]] == 0)
				{
					aux2.x = w2.x + v[k][0], aux2.y = w2.y + v[k][1], aux2.d = w2.d + 1;
					usg2[aux2.x][aux2.y] = 1, g2[aux2.x][aux2.y] = aux2.d;
					qg2.push(aux2);
				}
				if (dentro(w3.x + v[k][0], w3.y + v[k][1], n, m) && usr[w3.x + v[k][0]][w3.y + v[k][1]] == 0)
				{
					aux3.x = w3.x + v[k][0], aux3.y = w3.y + v[k][1], aux3.d = w3.d + 1;
					usr[aux3.x][aux3.y] = 1, r[aux3.x][aux3.y] = aux3.d;
					qr.push(aux3);
				}
			}
			if (fg1==z)break;
		}
		for (i = 1; i <= n; i++){
			if (g1[i][1] - r[i][1] >= 1 && g2[i][1] - r[i][1] >= 1)fg2 = 1;
			if (g1[i][m] - r[i][m] >= 1 && g2[i][m] - r[i][m] >= 1)fg2 = 1;
		}
		for (j = 1; j <= m; j++){
			if (g1[1][j] - r[1][j] >= 1 && g2[1][j] - r[1][j] >= 1)fg2 = 1;
			if (g1[n][j] - r[n][j] >= 1 && g2[n][j] - r[n][j] >= 1)fg2 = 1;
		}
		if (fg2)
			printf("YES\n");
		else
			printf("NO\n");
		t--;
		for (i = 1; i <= n; i++)
			for (j = 1; j <= m; j++){
				usr[i][j] = 0;
				usg1[i][j] = 0;
				usg2[i][j] = 0;
				r[i][j] = 0;
				g1[i][j] = 0;
				g2[i][j] = 0;
			}
 
		while (!qg.empty())
			qg.pop();
		while (!qg2.empty())
			qg2.pop();
		while (!qr.empty())
			qr.pop();
	
		
	}
} 
