#include<stdio.h>
#include <string.h>
char s[100001],c1[100001],c2[100001];
int n, i, j,L, k, m, cc1,cc2,v1,v2;
int main(){
	scanf("%d", &m);
	while (j < m)
	{
		cc1 = 0;
		cc2 = 0;
		scanf("%s", s);
		L = strlen(s);
		for (i = 0; i < L; i++)
		{
			if (i % 2 == 0)
			{
				c1[i] = '-';
				c2[i] = '+';
			}
			else
			{
				c1[i] = '+';
				c2[i] = '-';
			}
		}
		for (i = 0; i < L; i++)
		{
			if (s[i] != c1[i])
				cc1++;
			if (s[i] != c2[i])
				cc2++;
		}
		if (cc1 < cc2)
			printf("%d\n", cc1);
		else
			printf("%d\n", cc2);
		j++;
	}
}