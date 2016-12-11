#include <cstdio>
using namespace std;
int n, i, j, vm, a, idx, ki;
int main()
{
	scanf("%d", &n);
	while(n--)
	{
		scanf("%d", &vm);
		j = vm;
		while (vm--)
		{
			scanf("%d", &idx);
			ki += idx;
			a = a^idx;
		}
		ki -= j;
		if (ki == 0)
		{
			if (j & 1)
				printf("Brother\n");
			else
				printf("John\n");
		}
		else
		{
			if (!a)
				printf("Brother\n");
			else
				printf("John\n");
		}
		ki = a = 0;
	}
}