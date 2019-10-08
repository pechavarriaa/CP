#include <stdio.h>
#include <string.h>
using namespace std;
long long i,a, j, k, n, m, t,q,r,c,p;
int main()
{
	scanf("%lld", &t);
	while (t--)
	{
		r = 0,c=0,p=0;
		scanf("%lld%lld", &n, &k);
		while (n--){
			scanf("%lld", &a);
			if (a - p >= 0){
				a = a - p;
				p = 0;
				q = (a + k - 1) / k;
				c = q*k - a;
				r += q;
				if (c > 0)
					c--;
				  p = c;
			}
			else{
				p -= a;
				if (p > 0)
					p--;
			}
			
		}
		printf("%lld\n", r);
		
	}
}
 