#include <bits/stdc++.h>
#define min(a,b) ((a<b)?(a):(b))
using namespace std;
int i, j, k,t,u,z;
char s[100010];
int main() 
{
	scanf("%d", &t);
	while (t--)
	{
		scanf("%s", s);
		u = z = 0;
		k = strlen(s);
		for (i = 0; i < k; i++)
			u += (s[i] == '1'), z += (s[i] == '0');
 
		if (u == 1 || z == 1)
			printf("Yes\n");
		else
			printf("No\n");
	}
}
 