#include<bits/stdc++.h>
#define MAX_N 100005
#define MAX_INT 1000000009

using namespace std;

int a[MAX_N], f[MAX_N];

int __abs(int a, int b){
    if(a>b)
        return a-b;
    return b- a;
}

main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, k;
    cin >> n >> k;
    for(int i = 1; i<=n; i++){
        cin>> a[i];
    }
    f[1] = 0;
    f[0] = 0;
    for(int i = 2; i<=n; i++){
        f[i] = MAX_INT;
        for(int j = i-1; j>=max(1, i-k); j--){
            f[i] = min(f[i], f[j] + __abs(a[i], a[j]));
        }
    }
    cout<< f[n];
    return 0;
}