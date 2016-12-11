#include <stdio.h>
#include <string.h>
#include <string>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;
int i, j, l, u, t, e, ot, fg, n, k, m, w, arr[103000][3];
char s[1000006];
int main()
{
	scanf("%d", &t);
	while (t--)
	{
		w = 0; fg = 1;
		scanf("%s", s);
		n = strlen(s);
		if (n == 1)
		{
			printf("NO\n");
			continue;
		}
		u = n / 2;
		l = u;
		for (i = 0; i < u && l<=n; i++, l++)
			if (s[i] != s[l])
			{
				w++;
				i--;
			}
		if (w < 2)
		{
			printf("YES\n");
			continue;
		}
 
		w = 0;
		u = n / 2 + 1;
		l = u;
		for (i = 0; i < u && l<=n; i++, l++)
			if (s[i] != s[l])
			{
				w++;
				l--;
			}
		if (w != 1)
			fg = 1;
		else
			fg = 0;
		if (fg)
			printf("NO\n");
		else
			printf("YES\n");
 
	}
 
} 