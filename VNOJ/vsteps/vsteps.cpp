#include<bits/stdc++.h>
#define f1(i, n) for(int i = 1; i<=n; ++i)
#define f0(i, n) for(int i = 0; i<=n; ++i)
#define MAX_N 100005

using namespace std;

int broken[MAX_N];
long long f[MAX_N];

main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, k;
    cin >> n >> k;
    for(int i = 0; i<=n; i++)
        broken[i] = 0;
    for(int i = 1; i<=k; i++){
        int temp;
        cin >> temp;
        broken[temp] = 1;
    }
    f[1] = 1;
    for(int i = 2; i<=n; i++){
        if(broken[i] == 1)
            continue;
        f[i] = (f[i-1] + f[i-2])%14062008;
    }
    cout<< f[n];
    return 0;
}