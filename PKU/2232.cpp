#include <cstdio>
int n,s,c,f,i;
char lee;
int main() 
{
	while (scanf("%d", &n)==1)
	{
		for (i = 0; i < n; i++) {
			scanf(" %c", &lee);
			s += (lee == 'S');
			c += (lee == 'C');
			f += (lee == 'F');
		}
		if (c && f && s)
			printf("%d\n", n);
		else if (c && f && !s)
			printf("%d\n", f);
		else if (c && s && !f)
			printf("%d\n", c);
		else if (!c && f && s)
			printf("%d\n", s);
		else if (c && !f && !s)
			printf("%d\n", c);
		else if (!c && !f && s)
			printf("%d\n", s);
		else if (!c && f && !s)
			printf("%d\n", f);
		c = f = s = 0;
	}
}