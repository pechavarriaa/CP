#include <stdio.h>
long long t, n, m1, m2,r;
int main(){
	scanf("%lld",&t);
	while (t--){
		scanf("%lld", &n);
		while (n--){
			scanf("%lld",&m2);
			if (m2 > m1)
				r += m2 - m1;
			m1=m2;
		}
		
		printf("%lld\n", r);
		r = 0,m1=0;
	}
}