#include <cmath>
#include <cstdio>
#include <vector>
#include <queue>
#include <iostream>
#include <string.h>
#include <map>
#include <algorithm>
using namespace std;
int i, j,a ,b,n, m,tt,k,dif,v,cu,fg=1,ot;
char s1[20], s2[20],s3[20];
int main()
{
	scanf("%s%s",s1,s2);
	m = strlen(s1);
	b = strlen(s2);
	if (m != b)
		printf("WRONG_ANSWER\n");
	else
	{
		sort(s1, s1 + m);
		while (s1[i] == 0)
			i++;
		if (i < m)
			swap(s1[0], s1[i]);
		tt = strcmp(s1, s2);
		printf("%s\n", (tt==0) ? "OK" : "WRONG_ANSWER");
	}
}


