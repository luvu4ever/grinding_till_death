#include<bits/stdc++.h>
#define MAX_N 103
using namespace std;

int f[MAX_N][MAX_N], a[MAX_N][MAX_N];

main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int m,n;
    int ans = -1000009;
    cin >> m >> n;
    for(int i = 1; i<= m; i++){
        for(int j = 1; j<=n; j++){
            cin>>a[i][j];
        }
    }
    for(int i = 1; i<=m; i++){
        f[i][1] = a[i][1];
    }
    for(int j = 2; j<=n; j++){
        for(int i = 1; i<=m; i++){
            f[i][j] = f[i][j-1];
            if(i > 1)
                f[i][j] = max(f[i][j], f[i-1][j-1]);
            if(i < m)
                f[i][j] = max(f[i][j], f[i+1][j-1]);
            f[i][j] += a[i][j];
        }
    }
    for(int i = 1; i<=m; i++){
        ans = max(ans, f[i][n]);
    }
    cout<<ans;
    return 0;
}