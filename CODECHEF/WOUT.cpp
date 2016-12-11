#include <stdio.h>
int  i, t, m, j, L,hi,li;
long long arr[1000009],mn,n,h,p;
int main(){
 
    scanf("%d", &t);
    while (t--)
    {
        scanf("%lld%lld", &n, &h);
        for (i = 1; i <= n; i++){
            scanf("%d%d", &li, &hi);
            arr[li]++, arr[hi + 1]--;
        }
        for (i = 1; i <= n; i++)
            arr[i] = arr[i - 1] + arr[i];
 
 
        for (i = 0; i < h; i++)
            p += arr[i];
        mn = p;
        for (i = h; i <= n; i++){
            p += arr[i] - arr[i - h];
            if (p > mn)
                mn = p;
        }
        printf("%lld\n",h*n-mn);
        for (i = 0; i <= n; i++)
            arr[i] = 0;
        p = 0;
    }
} 