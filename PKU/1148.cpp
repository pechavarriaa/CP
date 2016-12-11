#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <cstdio>
using namespace std;
int n, i, j, k,arr[20010],xs[10010],ys[10010],lt[10010],que[10010][2],a,b,x,y,c,d;
int main()
{
	scanf("%d", &n);
	for (i = 0; i < 2 * n; i++)
		scanf("%d",&arr[i]);
	sort(arr, arr + 2 * n);
	for (i = 0; i < n; i++)
		scanf("%d",&lt[i]);
	for (i = 0; i < n; i++)
		xs[i]=arr[i];
	for (i = n; i < 2 * n; i++)
		ys[j++] = arr[i];

	if (lt[n - 1] == 2)
		xs[n - 1] *= -1;
	else
		if (lt[n - 1] == 3)
			xs[n - 1] *= -1, ys[n - 1] *= -1;
		else if(lt[n-1]==4)
			ys[n - 1] *= -1;

	for (i = n - 2; i >= 0; i--)
	{
		if (xs[i + 1]>0)
			xs[i] *= -1;
		if (ys[i + 1]>0)
			ys[i] *= -1;
	}
	a = c = 0;
	b = d = n - 1;
	for (i = n-2; i >-1; i--) {

		if (lt[i] == 1) {
			if (xs[b] > 0)
				que[x++][0] = xs[a], a++;
			else
				que[x++][0] = xs[b], b--;

			if (ys[d] > 0)
				que[y++][1] = ys[c], c++;
			else
				que[y++][1] = ys[d], d--;
		}
		else if (lt[i] == 2) {
			if (xs[b] < 0)
				que[x++][0] = xs[a], a++;
			else
				que[x++][0] = xs[b], b--;

			if (ys[d] > 0)
				que[y++][1] = ys[c], c++;
			else
				que[y++][1] = ys[d], d--;
		}
		else if (lt[i] == 3) {
			if (xs[b] < 0)
				que[x++][0] = xs[a], a++;
			else
				que[x++][0] = xs[b], b--;

			if (ys[d] < 0)
				que[y++][1] = ys[c], c++;
			else
				que[y++][1] = ys[d], d--                                   ;
		}
		else if (lt[i] == 4) {
			if (xs[b] > 0)
				que[x++][0] = xs[a], a++;
			else
				que[x++][0] = xs[b], b--;

			if (ys[d] < 0)
				que[y++][1] = ys[c], c++;
			else
				que[y++][1] = ys[d], d--;
		}
	}
	que[x][0]=xs[a];
	que[y][1] = ys[c];

	for (i = x; i>-1; i--) 
	{
		if (que[i][0] > 0)
			printf("+%d ", que[i][0]);
		else
			printf("%d ",que[i][0]);

		if (que[i][1] > 0)
			printf("+%d\n", que[i][1]);
		else
			printf("%d\n", que[i][1]);
	}
}
