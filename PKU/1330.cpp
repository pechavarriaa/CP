#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <string>
#include <cstdio>
using namespace std;
int n, i,a,b, j, z,t,k,tem[10010],usa[10010];
int main()
{
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		for(i=0;i<n-1;i++)
		{
			scanf("%d%d",&a,&b);
			tem[b]=a;
		}
	
		scanf("%d%d",&a,&b);
		usa[a]=1;
		while(tem[a]){
		   a=tem[a];
		   usa[a]=1;
		}
		usa[b]++;
		while(usa[b]<2){
		   b=tem[b];
		   usa[b]++;
		}
		printf("%d\n",b);
		for(i=0;i<=n;i++)
			usa[i]=tem[i]=0;
	}
}