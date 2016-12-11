#include <cmath>
#include <cstdio>
#include <vector>
#include <queue>
#include <iostream>
#include <string>
#include <map>
#include <algorithm>
using namespace std;
int t;
double s, v, res;
int main()
{
	
	scanf("%d", &t);
	while (t--)
	{
		scanf("%lf%lf",&s,&v);
		res = (2.0/3.0)*(s/v);
		printf("%.7lf\n",res);
	}
} 