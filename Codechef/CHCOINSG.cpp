#include <stdio.h>
#include <map>
#include <math.h>
#include <algorithm>
using namespace std;
const int A = 420000;
int a, b, c,t,n;
int main()
{
	scanf("%d",&t);
	while (t--)
	{
		scanf("%d", &n);
		if (n % 6 == 0)
			printf("Misha\n");
		else
			printf("Chef\n");
	}
		
}
 