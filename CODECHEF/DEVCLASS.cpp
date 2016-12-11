#include "stdio.h"
#include "algorithm"
#include "string.h"
#include "math.h"
using namespace std;
int  m,z,t,n,s,j,h,res,ty,i,k,p,b,g,tt;
char devu[100001];
int emb(char e){
  int ans=0;
  j=1;
  for(i=0;i<m;i+=2)
    {
      if(devu[i]!=e)
      {
        while(devu[j]!=e)
         j+=2;
         ans+=(pow(abs(i-j),ty));
         j+=2;
      }
   }
 
  return ans;
}
int main(){
scanf("%d",&tt);
for(p=0;p<tt;p++)
{
h=0;b=0;g=0;
    scanf("%d",&ty);
    if(ty==2)
       ty--;
    scanf("%s",devu);
    m=strlen(devu);
    for(j=0;j<m;j++)
    {
        if(devu[j]=='B')
        b++;
        else
        g++;
    }
    if(abs(b-g)>1){
    printf("%d\n",-1);
    h=1;
    }
     else
     {
      if(m%2)
      {
        if(b>g)
         res=emb('B');
        else
         res=emb('G');
      }
        else
        {
        t=emb('B');
        s=emb('G');
        (t<s)?res=t:res=s;
        }
     }
     if(!h)
     printf("%d\n",res);
 
}
}