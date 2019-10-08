#include<stdio.h>
#include <string.h>
int arr[1000000];
int n, i, j, x,t,mx,res;
int main(){
 
	scanf("%d", &t);
	for (i = 0; i < t; i++)
	{
		scanf("%d", &n);
		mx = 0;
		res = 0;
		for (j = 0; j < n; j++)
		{
			scanf("%d",&x);
			if (x > mx)
				mx = x;
 
			arr[x]++;
		}
		for (j = 1; j <= mx; j++)
		{
			if (arr[j]>res)
				res = arr[j];
			  arr[j] = 0;
		}
		printf("%d\n",n-res);
 
	}
}
 