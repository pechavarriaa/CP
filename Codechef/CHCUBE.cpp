#include <stdio.h>
#include <string.h>
#include<algorithm>
#include<string>
char s[7][20];
int i,j,k,l,t,n;
int main(){
    scanf("%d",&t);
    while(t--){
        for(i=1;i<=6;i++)
            scanf("%s",s[i]);
        if(((strcmp(s[1],s[3])==0) && (strcmp(s[1],s[5])==0))|| ((strcmp(s[1],s[4])==0) && (strcmp(s[1],s[6])==0))||((strcmp(s[1],s[3])==0) && (strcmp(s[1],s[6])==0))|| ((strcmp(s[1],s[4])==0) && (strcmp(s[1],s[5])==0))){
            printf("YES\n");
            
        }
        else if(((strcmp(s[2],s[3])==0) && (strcmp(s[2],s[5])==0))|| ((strcmp(s[2],s[4])==0) && (strcmp(s[2],s[6])==0))||((strcmp(s[2],s[3])==0) && (strcmp(s[2],s[6])==0))|| ((strcmp(s[2],s[4])==0) && (strcmp(s[2],s[5])==0))){
            printf("YES\n");
            
        }
        else 
        printf("NO\n");
    }
}  