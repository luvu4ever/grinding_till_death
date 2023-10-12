#include<bits/stdc++.h>

#define MAX_N (25005)
using namespace std;

int a[MAX_N], f[MAX_N];

main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    f[1] = 0;
    for(int i = 2; i<=n; i++){
        cin>>a[i];
        f[i] = 0;
    }
    f[0] = 0;
    f[1] = a[2];
    for(int i =2; i<=n; i++){
        f[i] = min(f[i-1] + a[i], f[i-2] + a[i]);
    }
    cout<<f[n];
    return 0;
}