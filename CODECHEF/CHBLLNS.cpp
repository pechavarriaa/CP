#include <stdio.h>
#include <algorithm>
#include <vector>
using namespace std;
long long k,t,x,y,z,r,g,b,n,res,m,arr[920];
int main()
{
	scanf("%lld",&t);
	while(t--)
	{
	    scanf("%lld%lld%lld",&r,&g,&b);
			scanf("%lld",&k);
 
			if(b<k)
				res+=b;
			else
				res+=k-1;
			if(g<k)
				res+=g;
			else
				res+=k-1;
			if(r<k)
				res+=r;
			else
				res+=k-1;
			printf("%lld\n",res+1);
			res=0;
	
	}
}
 