#include <stdio.h>
#include <string.h>
#include <math.h>
#include <algorithm>
using namespace std;
long long i, j, k, q,x,res,r,l,h,n,v,z, t, m,y,d,a;
int main(){
	scanf("%lld",&t);
	while (t--)
	{
		scanf("%lld%lld%lld%lld",&a,&d,&l,&r);
			q =1+ r - l;
			d = d % 9;
			k = (a + (l - 1)*d) % 9; if (!k)k = 9;
			y = d;
			j = q % 9;
			h = q / 9;
			if (q < 9)
				z = q;
			else
				z = 9;
				n = k;
				res = k;
				for (i =1; i < z; i++)
				{
					x = (k + y) % 9;
					if (!x)
						x = 9;
					res=res+ x;
					k = x;
				}
				if (j > 0) {
					v = n;k=n;
					for (i = 1; i < j; i++)
					{
						x = (k + y) % 9;
						if (!x)
							x = 9;
						v += x;
						k = x;
 
					}
				}
				res=res*h+v;
				printf("%lld\n", res);
				v = 0;
		
	
	}
}
 