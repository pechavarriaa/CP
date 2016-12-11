#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <cstdio>
#include <map>
using namespace std;
map<string, int> ww;
map<string, int>::iterator it;
string h;
int t;
double res;
int main()
{
	while (getline(cin,h)) {
		ww[h]++;
		t++;
		
	}
	for (it = ww.begin(); it != ww.end(); it++)
	{
		res = 100.0*(1.0*it->second) / (t*1.0);
		cout << it->first << " ";
		printf("%.4lf\n", res);
	}
}