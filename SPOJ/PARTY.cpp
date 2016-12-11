#include <stdio.h>
#include <string.h>
using namespace std;
int i, j, k, l,c, d, f,v,n,arr[505];
int main()
{
	while (scanf("%d%d", &d, &n) && d){
		for (i = 0; i <= d; i++)
			arr[i] = 0;
		for (i = 0; i < n; i++)
		{
			scanf("%d%d", &c,&v);
			for (j = d; j > c; j--)
				if (arr[j - c] != 0 && arr[j - c] + v > arr[j])
					arr[j]=arr[j - c]+v;			
			if (arr[c] < v)
					arr[c] = v;
 
		}
		j = 0,f=0;
		for (i = 1; i <=d; i++)
			if (arr[i] >f)
				j = i,f=arr[i];
		printf("%d %d\n",j,arr[j]);
	}
	
}
 