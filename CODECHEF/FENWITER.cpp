#include <cmath>
#include <cstdio>
#include <vector>
#include <queue>
#include <iostream>
#include <string>
#include <map>
#include <algorithm>
using namespace std;
int t,k,i,res,j,s;
string a, b, c,d;
int main()
{
	scanf("%d", &t);
	while (t--)
	{
		cin >> a >> b >> c >> s;
		d = a+b+c;
		k = d.size();
		j = k - 1;
		while (j>=0 && d[j] == '1')
			j--;
		if (j == -1)
			res = 1;
		else
		{
			if (j < a.size())
			{
				res = 1;
				k = a.size();
				for (int x = 0; x < j; x++)
					res += (a[x] == '1');
			}
			else if (j < a.size() + b.size())
			{
				j = j - a.size();
				k = b.size();
				for (int x = 0; x < k; x++)
					res += (b[x] == '1');
				res = res*s - (k - j -1);
				k = a.size();
				for (int x = 0; x < k; x++)
					res += (a[x]=='1');
				res += 1;
			}
			else
			{
				j = j - a.size() - b.size();
				res = 1;
				k = c.size();
				for (int x = 0; x < j; x++)
					res += (c[x] == '1');
				int z = 0;
				k = b.size();
				for (int x = 0; x < k; x++)
					z += (b[x] == '1');
				res = res + z*s;
				k = a.size();
				for (int x = 0; x < k; x++)
					res += (a[x] == '1');
			}
		}
		printf("%d\n", res);
		res = 0;
	}
} 