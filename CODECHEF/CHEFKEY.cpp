#include<stdio.h>
#include<algorithm>
using namespace std;
int i,j,k,n,m,c,a,b,t;
int main(){
	
	scanf("%d",&t);
	while(t--)
	{a=0;
		
		scanf("%d%d%d",&n,&m,&k);
		for(i=1;i<=k;i++)
		{
		  if(k%i)
		   continue;
		  b=k/i;
		if(i<=n && b<=m)
		   a++;
		 //if(b<=n && i<=m)
		//  a++;
	   }
	   printf("%d\n",a);
	}
} 