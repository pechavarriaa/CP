#include <bits/stdc++.h>
using namespace std;
int q,n,i,k,j;
bool fg;
int arr[200010];
int wh[200010];
vector<int>node[200010];
void dfs(int targ, int ind)
{
    if(targ == ind)
        return;
    wh[ind] = targ;
    node[targ].push_back(ind);
    dfs(targ,arr[ind]);
}
int main(){
    cin >> q;
    while(q--){
        cin >> n;
        for(i=1;i<=n;i++){
            node[i].clear();
            wh[i]=-1;
        }        
        for(i=1;i<=n;i++)
            cin>>arr[i];
        for(i=1;i<=n;i++)
           {
               if(wh[i] == -1)
                {
                    wh[i] = i;
                    node[i].push_back(i);
                    dfs(i,arr[i]);
               }
           }
        for(i=1;i<n;i++)
            cout<<node[wh[i]].size()<<" ";
        cout << node[wh[n]].size() << endl;     
    }
}