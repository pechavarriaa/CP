#include <bits/stdc++.h>
int t,n,v,c,p;
const int m = 5;
int avglt[m];
int main(){
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        std::fill_n(avglt, m, 12345);
        for(int i=0;i<n;i++)
        {
            v = 12345;

            for (int j=0;j<m;j++)
                v = std::min(avglt[j],v);
            
            scanf("%d",&c);
            (c<v)?p++:p=p;
            avglt[i % m]=c;
        }
        printf("%d\n",p);
        p=0;        
    }
}