#include "stdio.h"
#include "math.h"
#include <algorithm>
using namespace std;
int i, j, b, v, n,arr[300000][2];
int main()
{
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		scanf("%d", &arr[i][0]); 
	}
	for (i = 1; i <= n; i++)
		arr[arr[i][0]][1] = 1;
 
	for (i = 1; i <= n; i++){
		if (arr[i][1]==0) 
			printf("%d ", i);
		}
}
 