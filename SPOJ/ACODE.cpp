#include <cstdio>
#include <string.h>
char str[5010];
long long DP[5010];
int i, l;
int main() {
	DP[0] = DP[1] = 1;
	while (1)
	{
		scanf("%s", str);
		l = strlen(str);
		if (str[0] == '0')
			break;
		for (i = 2; i <= l; i++)
		{
			DP[i] = 0;					
			if ((str[i-2]!='0') && ((str[i - 2] - '0') * 10 + (str[i - 1] - '0') <= 26))
				DP[i] += DP[i - 2];
			if (str[i - 1] != '0')
				DP[i] += DP[i - 1];
		}
		printf("%lld\n", DP[l]);
	}
}