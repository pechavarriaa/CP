#include <stdio.h>
int t,a,b,r,res,w,c,i,arr[100000009];
int main(){
    scanf("%d",&t);
    while(t--){
        res=0;
        w=0;
        c=0;i=0;
        scanf("%d%d",&a,&b);
        r=a;
        if(a!=b)
        while(a!=0){
            c++;
            arr[a]=c;
            if(a==b){
            res=c-1;
                i=1;
                break;
            }
            a/=2;
            
        }
        if(i==0 & r!=b)
            while(b!=0){
                if(arr[b]!=0){
                res=arr[b]+w-1;
                    break;
                }
                b/=2;
                w++;
            }
        
            printf("%d\n",res);
        for(i=r;i>=1;i/=2)
            arr[i]=0;
    }
}