#include <stdio.h>
int t, y, x, k, n, i, fg, j, p, c;
int main(){
	scanf("%d",&t);
	for (j = 0; j < t;j++){
		fg = 0;
		scanf("%d%d%d%d", &x, &y, &k, &n);
		x -= y;
			for (i = 0; i < n; i++){
				scanf("%d%d", &p, &c);
				if (p >= x && c <= k)
					fg = 1;	
				}
			if (fg)
				printf("LuckyChef\n");
			else
				printf("UnluckyChef\n");
		
	}
	
	
}
 