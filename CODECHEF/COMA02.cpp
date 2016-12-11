#include "stdio.h"
long long m,n,o,c,i,fg,p,t,arr[1000000];
int main()
{
 scanf("%lld",&t);
    while(t--){
    c=1;
    fg=0;
      scanf("%lld%lld%lld",&n,&m,&o);
        for(i=0;i<n;i++)
        scanf("%lld",&arr[i]);
       if(arr[0]<o)fg=1;
       if(fg)
       printf("%d\n",-1);
       else
       {
          for(i=1;i<n;i++)
           if(arr[i]>=o)c++;
        (c>m)?printf("%lld\n",m):printf("%lld\n",c);
       }
    }
}
 