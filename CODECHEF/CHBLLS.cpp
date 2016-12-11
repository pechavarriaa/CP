#include <stdio.h>
#include <iostream>
#include <string>
#include <math.h>
#include <algorithm>
#include <map>
using namespace std;
int i, j,n,m,y, t,k;
int main() {		
	cout << "1\n4 1 2 2 3\n4 1 4 5 5" << endl;
	scanf("%d", &y);
	if (y==0)
		cout << "2\n1" << endl;
	else if(y==-1)
		cout << "2\n4" << endl;
	else if (y == 1)
		cout << "2\n3" << endl;
	else if (y == 2)
		cout << "2\n2" << endl;
	else if (y == -2)
		cout << "2\n5" << endl;
} 