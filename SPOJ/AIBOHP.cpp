#include <cstdio>
#include <string.h>
#define big(a,b) ((a>b)?(a):(b))
char str[6102],rev[6102];
int arr[6102][6102],t,i,j,l;
int lcs()
{
	for (i = 1; i <= l; i++)
		for (j = 1; j <= l; j++)
		{
			if (str[i - 1] == str[l - j])
				arr[i][j] = arr[i - 1][j - 1] + 1;
			else
				arr[i][j] = big(arr[i - 1][j], arr[i][j - 1]);
		}
	return arr[i-1][j-1];

}
int main() {
	scanf("%d", &t);
	while (t--) 
	{
		scanf("%s", &str);
		l = strlen(str);
		printf("%d\n", l - lcs());
	}
}