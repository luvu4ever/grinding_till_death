#include <bits/stdc++.h>

#define MAX_N 100005
#define MOD 2111992
using namespace std;

int f[MAX_N];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, k;
    cin>> n>> k;
    f[0] = 1;
    for(int i = 1; i<= n; i++){
        f[i] = f[i-1] + 1;
    }
    for(int i = k+1; i <= n; i++){
        f[i] = (f[i-1] + f[i-k- 1]) % MOD;
    }
    //giai thich ct: o? vi. tri'thu' i co' con bo` hoa.c ko
    // neu' ko, f[i] = f[i-1];
    // neu' co' , vi. tri' i-k-1 can` ko co' con bo` => f[i] += f[i-k-1]
    cout<<f[n];
    return 0;
}