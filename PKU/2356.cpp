#include <iostream>
#include <map>
#include <cmath>
#include <string>
#include <cstdio>
using namespace std;
int n, i, j, con, lec[11001], qui[15011], fl[15011], mer[15011];
long long sum, ot;
long long bs(long long a) {
	if (a < 0)
		return -a;
	return a;
}
int main()
{
	scanf("%d", &n);
	if (n == 1)
	{
		scanf("%d", &j);
		printf("%d\n%d\n", 1, j);
		return 0;
	}
	for (i = 0; i<n; i++)
	{
		scanf("%d", &lec[i]);
		fl[lec[i]]++;
	}
	for (i = 0; i<n; i++)
	{
		if (sum > 0 && !(sum%n))
			break;
		qui[lec[i]]++;
		fl[lec[i]]--;
		mer[lec[i]]++;
		con++;
		sum += lec[i];
		if (sum>0 && sum%n == 0)
			break;
		else
		{
			ot = n;
			while (bs(ot - sum) <= 15000)
			{
				if (sum > 0 && !(sum%n))
					break;
				if (ot>sum)
				{
					if (fl[ot - sum])
						mer[ot - sum]++, con++, sum = ot;
				}
				else if (ot<sum)
				{
					if (qui[sum - ot])
						mer[sum - ot]--, con--, sum = ot;
				}
				ot = ot + n;
			}
		}
	}
	printf("%d\n", con);
	for (i = 1; i <= 15000; i++) {
		for (j = 0; j<mer[i]; j++)
			printf("%d\n", i);
	}
}