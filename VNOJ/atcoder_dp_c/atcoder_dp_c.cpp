#include <bits/stdc++.h>
#define MAX_N 100005
using namespace std;

int f[MAX_N][4], a[MAX_N][4];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>> n;
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=3; j++){
            cin>> a[i][j];
        }
    }
    f[0][1] = f[0][2] = f[0][3] = 0;
    for(int i = 1; i<=n; i++){
        f[i][1] = f[i][2] = f[i][3] = 0;
        f[i][1] = max(f[i-1][2] + a[i][1], f[i-1][3] + a[i][1]);
        f[i][2] = max(f[i-1][1] + a[i][2], f[i-1][3] + a[i][2]);
        f[i][3] = max(f[i-1][2] + a[i][3], f[i-1][1] + a[i][3]);
    }
    cout<< max(f[n][1], max(f[n][2], f[n][3]));
    return 0;
}