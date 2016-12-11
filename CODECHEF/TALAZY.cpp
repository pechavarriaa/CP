#include <cstdio>
#include <cmath>
#include <cstring>
 
#include <algorithm>
using namespace std;
int i, j,t,arr[1200];
long long res,m,n,ni,b,fg;
int main() {
    
    scanf("%d",&t);
    while(t--)
    {
        scanf("%lld%lld%lld",&n,&b,&m);
        res=0;fg=1;
        ni=n;
        while(fg && n>0)
        {
            if(n>1)
            n=(n+1)/2;
            else
                fg=0;
            res=res+b+n*m;
            m=m*2;
            ni=ni-n;
            n=ni;
        }
        printf("%lld\n",res-b);
    }
    
} 