#include <bits/stdc++.h>
using namespace std;
int q,n,i,k;
bool fg;
int arr[205];
int res[205];
int dfs(int targ, int ind)
{
    if(k!=0 && targ == ind)
        return k;
    k++;
    dfs(targ,arr[ind]);
}
int main(){
    cin >> q;
    while(q--){
        cin >> n;
        for(i=1;i<=n;i++)
            cin>>arr[i];
        for(i=1;i<=n;i++)
            k=0,res[i]=dfs(i,i);
        for(i=1;i<n;i++)
            cout<<res[i]<<" ";
        cout << res[n] << endl;               
    }
}