#include <cstdio>
using namespace std;
int n, i, j, vm, a, idx, ki;
int main()
{
	while (scanf("%d", &n) == 1) 
	{
		idx = 0;
		while (n--)
		{
			scanf("%d", &ki);
			idx = (idx^ki);
		}

		printf("%s\n", idx?"Yes":"No");
	}

}