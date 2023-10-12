#include <bits/stdc++.h>

using namespace std;

int a[30003], f[30003], ans;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    for(int i = 1; i<=n; i++){
        cin>> a[i];
        f[i] = 1;
    }
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<i; j++){
            if(a[i] > a[j])
                f[i] = max(f[i], f[j] + 1);
        }
        ans = max(ans, f[i]);
    }
    cout << ans;
    return 0;
}
