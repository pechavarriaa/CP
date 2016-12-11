#include <cstdio>
#include <cmath>
#include <cstring>
#include <algorithm>
using namespace std;
int i, j, n, fg, t, k,arr[105];
int main() {
	while (scanf("%d", &k) && k)
	{
		t = 0; 
		for (i = 0; i < 101; i++)
			arr[i] = 0;

		for (i = 0; i < k; i++)
		{
			scanf("%d", &j);
			arr[j]++;
		}

		if (k & 1)
			printf("1\n");

		else 
		{
			for (i = 0; i < 101; i++)
				if (arr[i] & 1)
					t = 1;
			printf("%d\n", t ? 1 : 0);
		}
	}
}