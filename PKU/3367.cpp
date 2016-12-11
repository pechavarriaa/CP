#include <cstdio>
#include <iostream>
#include <vector>
#include <stack>
#include <string.h>
#include <algorithm>
using namespace std;
int i, j,t,l, k,cu[21010];
int  n, p;
char ss[20010];
struct ura {
	int x, y;
}ot,pp;
stack<ura>st;
vector<int>arr[11010];
int main()
{
//	freopen("nimer.txt","w", stdout);
	scanf("%d",&t);
	while (t--) 
	{
		scanf("%s",ss);
		l = strlen(ss);
		ot.x = l - 1; ot.y = 1;
		st.push(ot);
		arr[1].push_back(l - 1);
		for (i = l - 2; i >= 0; i--) {
			if ( ss[i]<='Z')
			{
				pp = st.top();
				while ( cu[pp.x] == 2) {
					st.pop();
					pp = st.top();
				}
				cu[pp.x]++;
				ot.y=st.size()+1;
				ot.x = i;
				st.push(ot);
				arr[ot.y].push_back(i);
			}
			else
			{
				
				pp = st.top();
				while (cu[pp.x] == 2) {
					st.pop();
					pp = st.top();
				}
				arr[pp.y + 1].push_back(i);
				cu[pp.x]++;
			}
		}
		i = 1;
		l = arr[i].size();
		while (l) {
			i++;
			l = arr[i].size();
		}
	
		for (j = i; j > 0; j--)
		{
			l = arr[j].size();
			for (k = 0; k < l; k++) 
				cout << ss[arr[j][k]];
		}
				cout << endl;
		for (j = i; j > 0; j--)
			arr[j].clear();
		for (i = 0; i < 20000; i++)
			cu[i] = 0;
		while (!st.empty())
			st.pop();
	}
}