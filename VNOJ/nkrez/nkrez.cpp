#include <bits/stdc++.h>

#define MAX_TIME 30005

using namespace std;

int f[MAX_TIME];
vector<int> a[MAX_TIME];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>> n;
    for(int i = 1; i<=n; i++){
        int p, k;
        cin>> p >> k;
        a[k].push_back(p);
    }
    for(int i = 1; i<= MAX_TIME-5; i++){
        f[i] = f[i-1];
        for(int j = 0; j< a[i].size(); j++){
            f[i] = max(f[i], f[a[i][j]] + i - a[i][j]);
        }
    }
    cout<<f[MAX_TIME-5];
    return 0;
}