#include <stdio.h>
#include <algorithm>
#include <queue>
using namespace std;
int i, j, k, b, s, c, w,t, n,res, fg, in, fin, mn, re, m;
int arr[600002];
int main()
{
	scanf("%d", &t);
	while (t--) {
		scanf("%d", &n);
		scanf("%d", &m);
		for (i = 0; i < m; i++)
			scanf("%d", &arr[i]);
		sort(arr, arr + m);
		j = 0;
		w = 1;
		
	
			for (i = m - 1; i >j;) {
				if (arr[j] > 0 && arr[i] > 0)
					arr[j]--, c++, m--, arr[i - 1] += arr[i] + 1, i--;
 
				else
					j++;
		}
		
			printf("%d\n", c);
			c = 0;
			
	}
}
 