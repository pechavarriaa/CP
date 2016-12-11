#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
int i;
double a, b,sum;
int main() {
	for (i = 0; i < 12; i++) {
		scanf("%lf", &a);
		b = b + a;
	}
	printf("$%.2lf\n", b/12);
}
