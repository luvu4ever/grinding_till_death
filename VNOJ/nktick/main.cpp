#include<bits/stdc++.h>
#define MAX_N 60003
using namespace std;

int t[MAX_N], r[MAX_N], f[MAX_N];
int n;

main(){
    int n;
    cin>> n;
    for(int i = 1; i<=n; i++){
        cin>> t[i];
    }
    for(int i = 1; i<= n-1; i++){
        cin >> r[i];
    }
    f[0] = 0;
    f[1] = t[1];
    for(int i = 2; i<=n; i++){
        f[i] = min(f[i-1] + t[i], f[i-2] + r[i-1]);
    }
    cout<< f[n];
    return 0;
}
