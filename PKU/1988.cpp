#include <stdio.h>
#include <algorithm>
#include <time.h>
using namespace std;
char ss;
int i,s,m,n,d,c,e,f,t,a,b,p,v=30000,pap[30011],res[30011],ot[30011],arr[30011];
int her(int x) {
	if (x == arr[x])
		return x;
	int aux = her(arr[x]);
	pap[x] += pap[arr[x]];
	arr[x] = aux;
	return aux;
}
int main()
{
	scanf("%d",&n);
	for (i = 1; i <= v; i++)
		 arr[i] = i, ot[i] = 1;

	for (i = 0; i < n; i++)
	{
		scanf(" %c",&ss);
		if (ss == 'M') 
		{ 
			scanf("%d%d", &a, &b);
			a = her(a);
			b = her(b);
			arr[b] = a;
			pap[b] = ot[a];
			ot[a] += ot[b];
		}
		else
		{
			scanf("%d", &a);
			s = her(a);
			printf("%d\n", ot[s]-pap[a]-1);
		}
	}
}