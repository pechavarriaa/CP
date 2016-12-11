#include <cstdio>
#include <cstring>
int i, j, k,u,n,h;
char s[10];
int main()
{
	scanf("%d", &k);
	while (k--)
	{
		h = 0;
		scanf("%d", &n);
		scanf("%s",s);
		if (!(strcmp(s, "Dee")))
			h = 1;
		scanf("%d",&u);
		if (n == 1 && h && u % 2 == 0)
			printf("Dee\n");
		else
			printf("Dum\n");
		for (i = 0; i < n - 1; i++)
			scanf("%d", &u);
	}
} 