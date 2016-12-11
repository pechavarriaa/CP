#include <bits/stdc++.h>
#define min(a,b) ((a<b)?(a):(b))
using namespace std;
int i, j, k,t,u,z,fg;
char s[122345];
int main() 
{
	scanf("%d", &t);
	while (t--)
	{
		fg = 0;
		scanf("%s", s);
		k = strlen(s);
		z = k - 1;
		for (i = 0; i < (k + 1) / 2; i++,z--)
			if (s[i]!='.' && s[z]!='.' && s[z] != s[i])
				fg = 1;
 
		if (fg)
			printf("%d\n",-1);
		else
		{
			z = k - 1;
			for (i = 0; i < (k+1)/2; i++)
			{
				if (s[i] == '.' && s[z] == '.')
					s[i] = s[z] = 'a';
				else if (s[i] == '.')
					s[i] = s[z];
				else if (s[z] == '.')
					s[z] = s[i];
					z--;
			}
			printf("%s\n",s);
		}
	}
}
 