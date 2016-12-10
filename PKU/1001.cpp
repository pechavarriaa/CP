#include <stdio.h>
#include <string.h>
#include <algorithm>
using namespace std;
int i, j, a, b, c, k, d, h,fg,p,t, n, y, uu, v, m, arr[3][3000000];
char s1[22400];
int main() {
	
	while (scanf("%s", s1)>0)
	{
		scanf("%d", &n); fg = 0;
		p = 0;
		d = 0;
		a = strlen(s1);
		for (i = a - 1; i >= 0; i--) {
			if (s1[i] != '.') {
				arr[0][k] = arr[1][k] = s1[i] - '0', k++;
				if (!d)
					p += arr[0][k-1];
			}
			else
				uu = a - i-1,d=1;
		}
		 uu*=n;
		t = k;
		while (--n) {
			for (i = 0; i < t; i++)
				for (j = 0; j < k; j++) {
					h = arr[2][i+j];
					h = h + arr[0][i] * arr[1][j];
					arr[2][i + j] = h % 10;
					arr[2][i + j + 1] += h / 10;
				}
			t = k + t - 1;
			if (arr[2][t]) {
				while (arr[2][t]>9) {
					arr[2][t + 1] = arr[2][t] / 10;
					arr[2][t] %= 10;
					t++;
					fg = 1;
				}
				if (!fg)
					t++;
				fg = 0;
			}
			
			for (i = 0; i < t; i++)
				arr[0][i] = arr[2][i], arr[2][i] = 0;
		}

		i = t - 1; j = 0;
		if (!arr[0][i])
			i--;
		if (!arr[0][0] && p) {
			while (!arr[0][j])
				j++;
		}
		if(p)
		for (; i>= j; i--)
		{
			if (i+1== uu)
				printf(".");
			printf("%d", arr[0][i]);
			fg = 1;
		}
		if(!p)
			for (; i >=j; i--)
			{
				if (i + 1 == uu)
					break;
				printf("%d", arr[0][i]);
				fg = 1;
			}
		if (fg)
			printf("\n");
		else
			printf("0\n");
		for (i = 0; i < t; i++)
			arr[0][i] = arr[1][i] = arr[2][i] = 0;
		k = 0;
	}	
}
