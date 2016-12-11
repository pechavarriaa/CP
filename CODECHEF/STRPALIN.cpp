#include <stdio.h>
#include <string.h>
#include <string>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;
int i, j, l, u, fg, t,e, n, m,arr[200];
char a[2000],b[2000];
int main()
{
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%s%s",&a,&b);
		l = strlen(a);
		u = strlen(b);
		for (j = 0; j < l; j++)
			arr[a[j]]=1;
		for (j = 0; j < u; j++) {
			if (arr[b[j]] == 1)
				arr[b[j]] = 2;
		}
		for (j = 'a'; j <= 'z'; j++)
			if (arr[j] > 1)
				t = 1;
		for (j = 'a'; j <= 'z'; j++)
			arr[j] = 0;
		if (t)
			printf("Yes\n");
		else
			printf("No\n");
		t = 0;
	}
} 