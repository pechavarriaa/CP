#include <stdio.h>
#include <algorithm>
using namespace std;
int i, j, k, a, n, t, mx, b;
char s[1301], s1[1205];
int main()
{
	scanf("%d", &t);
	while (t--) {
		mx = -1; a = 0;
		scanf("%d", &n);
		scanf("%s", s);
		scanf("%s", s1);
		for (i = 0; i < n; i++)
			if (s[i] == s1[i])
				a++;
		for (i = 0; i <= a; i++)
		{
			scanf("%d", &b);
			mx = max(b, mx);
		}
		for (i = a + 1; i <= n; i++)
			scanf("%d", &b);
		if (a != n)
			printf("%d\n", mx);
		else
			printf("%d\n", b);
	}
 
}
 