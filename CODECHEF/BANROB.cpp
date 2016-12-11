#include <stdio.h>
#include <algorithm>
using namespace std;
int i, j, k, m, n, x, y, d, f, t, mnx, mny, mxy, mxx;
double q, w,res,wes,r;
int arr[600009], a, b, l;
double ala(long double x,int n,int j) {
	 double res,s,xxx;
	res = 1;
	xxx = x;
	for (i = 0; i < j; i++)
	{
		if (arr[i] == 1)
			res *= x;
			x *= x; 
	}
	if (n % 2==0)
		s = (1 - res) / (1+xxx);
	else
		s = (1 + res) / (1 + xxx);
	return(s);
}
int main()
 {
    scanf("%d", &t);
	while (t--) {
		scanf("%d",&n);
		scanf("%lf",&r);
		m = n; i = 0;
		while (m >= 1)
		{
			arr[i] = m % 2;
			m /= 2;
			i++;
		}
			res = ala(r, n, i);
			wes = 1 - res;
			res *= (1e9);
			wes *= (1e9);
			printf("%lf ",res);
			printf("%lf\n", wes);
			res = 0;
			wes = 0;
	}
}
 
 