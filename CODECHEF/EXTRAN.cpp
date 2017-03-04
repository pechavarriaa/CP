#include <cstdio>
#include <algorithm>
using namespace std;
int arr[100010];
int test, ind,num,val;
int main() {
	scanf("%d", &test);
	while (test--)
	{
		scanf("%d", &num);
		for (ind = 0; ind < num; ind++)
			scanf("%d", &arr[ind]);
		sort(arr, arr + num);
		for (ind = 0; ind < num - 1; ind++)
		{
			if (arr[ind + 1] - arr[ind] != 1)
			{
				val = ind;
				break;
			}
		}
			if (val == 0)
				printf("%d\n", arr[0]);
			else
				if (val < num - 2)
					printf("%d\n", arr[val]);
				else
					printf("%d\n", arr[num - 1]);
	}
}