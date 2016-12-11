#include <iostream>
#include <cstdio>
#include <string.h>
#include <algorithm>
using namespace std;
int i,j,k,n,m,v,arr[30],tam[10005];
char mat[200001];
int main() {
	while (scanf("%s", mat)>0) {
		k = strlen(mat);
		for (i = 0; i < k; i++)
			if (mat[i] >= 'A' && mat[i] <= 'Z')
				arr[mat[i] - 'A']++;
		if (strcmp(mat, "HELLO!") == 0)
			break;
	}
	for (i = 0; i <= 'Z' - 'A'; i++)
		m = max(m, arr[i]);
	v = m;
	
	for (i = 0; i <m; i++)
	{
		for (j = 0; j <= 25; j++) {
			if (arr[j] >= v)
				printf("* ");
			else
				printf("  ");
		}
		printf("\n"); v--;
	}
	k = 'A';
	for (i = 0; i <= 'z' - 'a'; i++, k++)
		printf("%c ", k);
		printf("\n");

}