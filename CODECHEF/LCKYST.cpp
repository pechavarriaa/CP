#include <stdio.h>
#include <string.h>
#include<algorithm>
#include<string>
long long n,a,k,z,p,j;
int main(){
    scanf("%d",&n);
    while(n--){
        k=0,z=0,p=1,j=0;
        scanf("%lld",&a);
        z=a;
        while(a%5==0)
        {
            a/=5;
            k++;
        }
 
        while(a%2==0){
            a/=2;
            k--;
        }
        while(j<k)
        {
            p*=4;
            j+=2;
        }
   
        
        printf("%lld\n",z*p);
    }
}
 