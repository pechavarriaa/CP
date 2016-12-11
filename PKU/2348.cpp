#include <cstdio>
#define min(a,b) ((a<b)?(a):(b))
long long a,b,c,d,k,o;
int main() 
{
	while (scanf("%lld%lld",&a,&b) && a && b)
	{
		while (1)
		{
			k++;
			c = min(a, b);
			d = a + b - c;
			o = d / c;
			if (o >= 2 || d%c==0)
				break;
			a = d%c;
			b = c;
		}	
		printf("%s\n", k & 1 ? "Stan wins" : "Ollie wins");k = 0;
	}
}