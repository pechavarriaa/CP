#include<stdio.h>
#include<algorithm>
#include <cmath>
int u,c;
double w,mi,a,b;
int main(){
	while(scanf("%d",&u)&&u){
		mi=30000;
		while(u--){
		scanf("%lf%lf",&a,&b);
		if(b>-0.0001){
	    w=16200/a+b;
		  if(mi>w)
		   mi=w;
		}
		}
	   printf("%d\n",(int)ceil(mi));
	}
	
}