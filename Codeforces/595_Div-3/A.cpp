#include <bits/stdc++.h>
using namespace std;
int q,n,i;
bool fg;
int arr[105];
int main(){
    cin >> q;
    while(q--){
        fg=false;
        cin >> n;
        for(i=0;i<n;i++)
            cin>>arr[i];
        sort(arr,arr+n);
        for(i=0;i<n-1;i++)
        {
            if(arr[i]+1==arr[i+1])
                fg=true;
        }
        cout << (fg?'2':'1') << endl;
    }
}