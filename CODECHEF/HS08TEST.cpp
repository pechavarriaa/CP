#include<iostream>
#include<stdio.h>
using namespace std;
int n;
double i,j,k,l;
int main(){    
    
    cin>>n>>k;
    l=k-n-0.5;
    if(l>=0){
    if(n%5==0){
        
        printf("%.2lf",l);
    }
        else
            printf("%.2lf",k);
    }
    else
        printf("%.2lf",k);
    
} 