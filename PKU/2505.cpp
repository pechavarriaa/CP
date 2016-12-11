#include <cstdio>
#include <cmath>
using namespace std;
long long n, i, j, vm, a, idx, ki;
int main()
{
	while (scanf("%lld", &n) == 1)
	{
		ki = 0;
		while (1)
		{
			ki++;
			if ((ki & 1 && n < 10) || (!(ki & 1) && n < 3))
				break;
			
			if (ki & 1)
				n = ceil((double)(n*1.0 / 9));
			else 
				n = ceil((double)(n*1.0 / 2));
		}
		if (ki & 1)
			printf("Stan wins.\n");
		else
			printf("Ollie wins.\n");
	}
}