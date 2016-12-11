#include <stdio.h>
#include <iostream>
#include <queue>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;
struct ura{
  int x;
  string st;
}a,b,c;
queue<ura>cola;
int i,j,k,u,c1,n,c2,c3,ma;
int papa[3000010],usa[30000010];
int main()
{
 
	while(scanf("%d",&n) && n){
		u=1%n;
		a.x=u;
		a.st="1";
		usa[u]=1;
		cola.push(a);
		while(!usa[0]){
			b=cola.front();
			a.x=(b.x*10)%n;
			a.st=b.st+"0";
			c.x=(1+b.x*10)%n;
			c.st=b.st+"1";
			if(!usa[a.x]){
				cola.push(a);
				usa[a.x]=1;
			}
			if(!usa[c.x]){
				cola.push(c);
				usa[c.x]=1;
			}
			cola.pop();
		}
	   if(!a.x)
		   cout<<a.st<<endl;
	   else
		   cout<<c.st<<endl;
	   while(!cola.empty())
		   cola.pop();
	   for(i=0;i<201;i++)
		   usa[i]=0;

	}

}