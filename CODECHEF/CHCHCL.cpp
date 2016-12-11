#include <cstdio>
int i, j, t, res;
int main()
{
	scanf("%d", &t);
	while (t--) {
		scanf("%d%d", &i, &j);
		if (i & 1 && j & 1)
			printf("No\n");
		else
			printf("Yes\n");
	}
    return 0;
}
 