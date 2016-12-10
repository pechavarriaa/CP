#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
using namespace std;
class dato{
public:
	long long x, y;
};
bool operator <(dato a, dato b){
	return(a.x < b.x );
}
class dato arr[120000];
long long t, n, m, x1, x2, m1, m2, i, j, s, r = 1000000100,narr[120000];
int main(){
	scanf("%lld",&t);
	while (t--){
		scanf("%lld", &n);
		for (i = 0; i < n;i++){
			scanf("%lld", &m);
			r = 1000000100;
			for (j = 0; j < m; j++){
				
					scanf("%lld%lld", &m1, &m2);
					r = min(m1, r);
			}
			arr[i].y = i,arr[i].x = r;
		}
		sort(arr, arr + n);
		for (i = 0; i < n; i++)
			narr[arr[i].y] = n-i-1;
		
		for (i = 0; i < n; i++)
			printf("%lld\n",narr[i]);
		
	}
}
 
