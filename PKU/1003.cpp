#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
int i;
double a, b,sum;
int main() {
	while (scanf("%lf", &a) && a >= 0.01) {
		b = 2; sum = 0; i = 0;
		while (sum < a) {
			sum = sum + 1 / b;
			b++;
			i++;
		}
		
			printf("%d card(s)\n", i);
	}
}
