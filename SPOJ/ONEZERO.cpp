 #include <stdio.h>
    #include <math.h>
    #include <queue>
    #include <algorithm>
    using namespace std;
    int i,s,x,v,u,y, h, ca,n, m,papa[20010],cola[20010], mod[20010],usa[6000009],arr[5];
    void imp(int u)
    {
    	if (u != 0) 
    		imp(papa[u]);
    		printf("%d", cola[u]);
    	
    }
    int main()
    {
    	arr[1] = 1;
    	scanf("%d", &s);
    		while (s--)
    	{
    		scanf("%d", &n); ca++;
    		if (n == 1)
    		{
    			printf("%d\n", 1); continue;
    		}
    			usa[1] = ca;
    			mod[0] = 1; 
    			cola[0] = 1;
    			papa[0] = 0; v = u = 0;
    			while (v <= u && usa[0]!=ca)
    			{
    				x = mod[v];
    				for (i = 0; i < 2; i++)
    					if (usa[(10 * x + arr[i]) % n] != ca)
    					{
    						usa[(10 * x + arr[i]) % n] = ca;
    						u++;
    						cola[u] = arr[i];
    						mod[u] = (10 * x + arr[i]) % n;
    						papa[u] = v;
    						if (mod[u] == 0)
    							break;
    						
    					}
    					v++;
    			}
    			imp(u);
    			printf("\n");
    	}
    	
    }