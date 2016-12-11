#include <stdio.h>
#include <iostream>
#include <string.h>
#include <math.h>
#include <algorithm>
#include <map>
using namespace std;
char a1[]="CONTEST_WON",a2[]="TOP_CONTRIBUTOR" , a3[]="BUG_FOUND", a4[]="CONTEST_HOSTED", s[40];
char qu[40];
int i, j,n,m,y, t,k;
int main() {
	scanf("%d", &t);
	while (t--) 
	{
		scanf("%d",&k);
		scanf("%s", qu);
		if (strlen(qu) == 6)
			j = 200;
		else
			j = 400;
		while (k--)
		{
			scanf("%s", s);
			if (!strcmp(s, a1))
			{
				scanf("%d", &y);
				m += 300 + max(0, 20 - y);
			}
			else if (!strcmp(s, a2))
				m += 300;
			else if (!strcmp(s, a3))
			{
				scanf("%d", &y);
				m += y;
			}
			else
				m += 50;
		}
		m = m / j;
		printf("%d\n", m);
		m = 0;
	}
} 