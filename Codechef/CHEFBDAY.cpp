#include "stdio.h"
int t,m,n,q,i,a,b,arr[1000000];
int main()
{
 scanf("%d",&t);
   while(t--){
    m=-1;
    scanf("%i%i",&n,&q);
    for(i=0;i<n;i++){
     scanf("%i%i",&a,&b);
     arr[a]++;
     arr[b+1]--;
      if(b>m)m=b;
     }
     for(i=1;i<=m+1;i++)
      arr[i]+=arr[i-1];
      for(i=0;i<q;i++){
       scanf("%i",&a);
       printf("%i\n",arr[a]);
       }
       for(i=0;i<m+1;i++)arr[i]=0;
   }
}
 