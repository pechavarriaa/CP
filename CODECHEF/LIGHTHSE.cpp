#include <iostream>
#include <stdio.h>
#include <algorithm>
using namespace std;
int i, j, k, m, n,  w, x, y, d, f, t, mnx, mny, mxy, mxx;
int arr[600009][2], a, b, l, r;
int main()
 {
    scanf("%d", &t);
	   while (t--) {
		        scanf("%d", &n);
		       for (i = 0; i<n; i++)
			{
			            scanf("%d%d",&x,&y);
						if (i == 0) {
							mxx = x, mnx = x, mny = y, mxy = y, a = y, b = y, l = x, r = x, f = 1; d = 1;
						}
						else {
							if (x < mnx)
								mnx = x, mny = y, d = i + 1;
							if (x > mxx)
								mxx = x, mxy = y, f = i + 1;
						}
						arr[i][0] = x;
		                arr[i][1] = y;
		                 a = max(a,y);
		                 b = min(b,y);
		                 l = min(l,x);
		                 r = max(r,x);
		            if (x<mnx)
			             mnx = x,mny = y,d = i+1;
		            if (x>mxx)
			             mxx = x,mxy = y,f = i+1;
		 }
		       for (i = 0; i<n; i++)
			{
			           if (arr[i][0] == l && arr[i][1] == a)
			{ printf("%d\n",1); printf("%d ",i + 1); printf("SE\n"); break; }
			           if (arr[i][0] == l && arr[i][1] == b)
			{ printf("%d\n",1); printf("%d ",i + 1); printf("NE\n"); break; }
			           if (arr[i][0] == r && arr[i][1] == a)
			{ printf("%d\n",1); printf("%d ",i + 1); printf("SW\n"); break; }
			           if (arr[i][0] == r && arr[i][1] == b)
			{ printf("%d\n",1); printf("%d ",i + 1); printf("NW\n"); break; }
		}
 
			       if (i == n)
 
		{
			           printf("%d\n",2);
		           if (mny <= mxy)
						printf("%d NE\n%d SW\n",d,f);
		           else
			            printf("%d SE\n%d NW\n",d,f);
		}
	}
}
 
 