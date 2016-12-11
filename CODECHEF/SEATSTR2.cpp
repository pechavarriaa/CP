#include <stdio.h>
#include <string.h>
#include <math.h>
#include <algorithm>
using namespace std;
long long i,x,y,fg,l, k,w,t,j;
long long a,L,b,c,res,d,e,f,mod=1e9+7,arr[300],con[300];
char s[230200];
void fun(long long q)
{
	long long w = mod - 2,k=q;
	while (w > 0)
	{
		if (w % 2)
 		res = (res*k) % mod;
		k = (k*k) % mod;
		w /= 2;
	}
}
int main()
{
	x = 'a'; y = 'z';
	scanf("%lld",&t);
	while (t--) {
		fg = 0;
		scanf("%s", s);
		L = strlen(s);
		res = 1;
		for (i = 1; i <= L; i++)
			res = (res*i) % mod;
		for (i = 0; i < L; i++) 
			con[s[i]]++;
		for (i = x; i <= y; i++) {
			if (con[i])
				fg++;
		}
	
		for (i = x; i <= y; i++) {
			for (j = i + 1; j <= y; j++) {
				b = (b+(con[i] * con[j]) % mod)%mod;
				e = (e+((((con[i] * (con[i] - 1)) / 2) % mod)*((con[j]*(con[j]-1))/2)%mod)%mod)%mod;
				for (l = j + 1; l <= y; l++) {
					c = (c+(con[i] * con[j] * con[l]) % mod)%mod;
					d = (d+((((((con[i] * (con[i] - 1)) / 2) % mod)*con[j]) % mod)*con[l]) % mod)%mod;
					d = (d+((((((con[j] * (con[j] - 1)) / 2) % mod)*con[i]) % mod)*con[l]) % mod)%mod;
					d = (d+((((((con[l] * (con[l] - 1)) / 2) % mod)*con[j]) % mod)*con[i]) % mod)%mod;
					for (k = l + 1; k <= y; k++)
						f = (f+(((((con[i] * con[j]) % mod)*con[l]) % mod)*con[k]) % mod)%mod;
				}
			}
		}
		f = (f * 3) % mod;
		c = (c * 2) % mod;
		d = (d * 2) % mod;
		for (i = x; i <= y; i++)
		{
			if (con[i])
				arr[i] = 1;
			for (j = 1; j <= con[i]; j++)
				arr[i] = (arr[i] * j) % mod;
			if (con[i])
				fun(arr[i]);
		}
		if (fg > 1) {
			res = (res*(res - (1 + b + c + d + e + f))) % mod;
			res = (res + mod) % mod;
			printf("%lld\n",res );
		}
		else
			printf("%d\n",0);
		res = 1;
		for (i = x; i <= y; i++)
			con[i] = arr[i] = 0;
		b = e = f = d = c = 0;
	}
} 