#include<iostream>
#include<iomanip>
using namespace std;
int t, n,re, i,co,fg;
int main() {
	ios::sync_with_stdio(false);
	cin >> t;
	while (t--)
	{
		co = 0; fg = 0;
		cin >> n;
		for (i = 0; i < n; i++)
		{
			cin >> re;
			if (re == 0)
				fg = 1;
			if (fg)
			{
				if (re)
					co += 100;
				else
					co += 1100;
			}
		}
		cout << co << endl;
	}
}