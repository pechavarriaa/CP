#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
int i, mo[10][2] = { 0,0,-1,-1,0,-1,1,-1,-1,0,0,0,1,0,-1,1,0,1,1,1};
long long a,b,c,d,x,y,p;
char ve[1000010];
int main() {
	scanf("%I64d", &p);
	while (p--) {
		i = 1; a = b = 0; x = y = 0;
		scanf("%s",ve);
		while (ve[i-1] != '5') 
		{
			c = a + mo[ve[i - 1] - '0'][0];
			d = b + mo[ve[i - 1] - '0'][1];
			y += a*d;x+=c*b;
			i++;
			a = c;
			b = d;
		}
		x = x - y;
			if (x < 0)
			x *= -1;
		if (x & 1)
			printf("%I64d.5\n",x/2);
		else
			printf("%I64d\n", x/2);
	}
}
/*
	8,2,6,4
	norte,sur,este,oeste
	9,7,3,1
	Noreste,Noroeste,Sureste,Suroeste
*/