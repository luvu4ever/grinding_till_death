//---------LuvU----------
#include<bits/stdc++.h>
#define f1(i,a) for(int i=1; i<=a; ++i)
#define f0(i,a) for(int i=0; i<a; ++i)
#define fi first
#define se second
#define pb push_back
#define mp make_pair
#define pii pair<int,int>
#define MAX_N (25)
#define BIT(x, i) (1 & ((x) >> (i)))
#define oo (1e9+7)

using namespace std;

int n, m;
int a[MAX_N];

int abs(int x){
    return (x < 0) ? -x : x;
}


int dp_Bitmask(){
    int res = oo;
    for(int mask = 0; mask < (1<<n); ++mask){
        int sum = 0;
        for(int i = 0; i<n; ++i){
            if(BIT(mask, i)){
                sum += a[i+1];
            }
        }
        if(sum <= m)
            res = min(res, m - sum);
    }
    return res;
}

main()
{
    // freopen("inp.txt", "r", stdin);
    // freopen("out.txt", "w", stdout);
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> n >> m;
    f1(i, n)
        cin >> a[i];
    cout<<dp_Bitmask();
    return 0;
}