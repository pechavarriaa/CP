#include <stdio.h>
#include <algorithm>
using namespace std;
void act(int, int, int, int, int);
int sgt(int, int, int, int, int);
int i, j,n,t,q,a,b,l,oo=1e9+2, arr[100002],arb[500000];
int main(){
	scanf("%d", &t);
	while (t--){
		l++;
		scanf("%d%d",&n,&q);
		for (i = 0; i < n; i++){
			scanf("%d", &arr[i]);
			act(0, 0, n - 1, i, arr[i]);
		}
		printf("Scenario #%d:\n\n", l);
		for (i = 0; i < q; i++){
			scanf("%d%d", &a, &b);
			printf("%d\n\n",sgt(0, 0, n - 1, a - 1, b - 1));
			}
		}
	
}
void act(int pos, int ini, int fin, int x, int val){
	if (ini <= x && fin >= x)
	{
		if (ini == fin)
			arb[pos] = val;
		else
		{
			int med = (ini + fin) / 2;
			act(pos * 2 + 1, ini, med, x, val);
			act(pos * 2 + 2, med + 1, fin, x, val);
			arb[pos] = min(arb[pos*2+1], arb[pos*2+2]);
		}
	}
}
int  sgt(int pos,int ini,int fin,int a,int b){
	if ((fin<a) || (ini>b))
		return oo;
	else
	{
		if (ini >= a && fin <= b)
			return arb[pos];
		else
		{
			int med = (ini + fin) / 2;
			return min(sgt(pos * 2 + 1, ini, med, a, b), sgt(pos * 2 + 2, med + 1, fin, a, b));
		}
	}
} 