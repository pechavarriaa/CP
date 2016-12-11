 #include <stdio.h>
    #include <math.h>
    #include <queue>
    #include <algorithm>
    using namespace std;
    struct ura {
    	int x, y;
    };
    ura aux,ot;
    queue<ura>cola;
    int  i, j,f,s,g,d,u, a, b, c,fg=1, e, x, y, h, n, m, usa[6000009];
    int main()
    {
    	scanf("%d%d%d%d%d", &f, &s, &g, &u, &d);
    	aux.x = s; usa[s] = 1;
    	cola.push(aux);
    	while (fg && usa[g]==0)
    	{
    		ot = cola.front();
    		cola.pop();
    		if (usa[ot.x+u]==0 && ot.x + u <= f)
    		{
    			usa[ot.x+u] = ot.y + 1;
    			aux.x = ot.x + u;
    			aux.y = ot.y + 1;
    			cola.push(aux);
    		}
    		if (ot.x - d >0 && usa[ot.x-d]==0)
    		{
    			usa[ot.x - d] = ot.y + 1;
    			aux.x = ot.x -d;
    			aux.y = ot.y + 1;
    			cola.push(aux);
    		}
    		if (cola.empty())
    			fg = 0;
    	}
    	if (s == g)
    		printf("%d\n",0);
    	else
    	if (usa[g])
    		printf("%d\n",usa[g]);
    	else
    		printf("use the stairs\n");
    }