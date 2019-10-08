#include <stdio.h>
#include <algorithm>
#include <math.h>
using namespace std;
int i, j,n,h1,m1, t, mx;
double h,a,m,b,q,k;
int main()
{
	b = (1.0/120.0);
	scanf("%d", &t);
	while (t--) {
		scanf("%lf",&a);
		for (i = 0; i < 12; i++)
			for (j = 0; j < 60;j++)
			{
					h = i * 30 + j*(0.5);
					m = 6 * j;
					q = fabs(h - m);
					if (q > 180)
						q=360-q;
					if (fabs(q - a) < b)
						printf("%.2d:%.2d\n",i,j);
			}
	}
 
}
