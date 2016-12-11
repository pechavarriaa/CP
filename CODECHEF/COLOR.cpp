#include <stdio.h>
#include <algorithm>
#include <vector>
using namespace std;
int k,i,j,t,v,n,m,arr[920];
char s[619220];
int main()
{
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
	 scanf("%s",s);
	 for(i=0;i<n;i++)
		 arr[s[i]]++;
	   k=max(arr['R'],max(arr['G'],arr['B']));
	   printf("%d\n",n-k);
	   arr['R']=arr['G']=arr['B']=0;
	}
}
 