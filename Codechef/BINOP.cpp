#include <stdio.h>
#include <string.h>
#include <algorithm>
using namespace std;
int i,j,t,k,L,x,v,a;
char s[2][3000006];
int main(){
  scanf("%d",&t);
  while(t--)
  {
   scanf("%s",s[0]);
   scanf("%s",s[1]);
   L=strlen(s[0]);
   x=0;k=0;v=0;
   for(i=0;i<L;i++)
     {
        if(s[0][i]!=s[1][i])
        x++;
        if(s[0][i]=='1')
        k++;
        if(s[1][i]=='1')
          v++;
     }
 
     if(x==0)
     printf("Lucky Chef\n0\n");
     else if(k==L || !k)
       printf("Unlucky Chef\n");
       else 
       printf("Lucky Chef\n%d\n",(x-abs(v-k))/2+abs(v-k));
  }
} 