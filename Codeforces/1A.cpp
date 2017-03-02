#include <iostream>
using namespace std;
long long n,m,l,i,j,y,z,a,b,c;
int main(){

    cin >>n>>m>>a;
    if(n%a!=0){
        b=a;
        z=a;
        i=1;
        while(n>b){
            b+=z;
            i++;
        }
       
    }
    
    else
        b=n;
    if(m%a!=0){
        c=a;
        y=a;
        j=1;
        while(m>c){
            c+=y;
            
            j++;
        }
        
    }
    
    else
        c=m;
    
    l=(b*c)/(a*a);
    
    cout<<l<<endl;
    
}
