#include<bits/stdc++.h>
#define MAX_N 100005

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
    int n;
    cin >> n;
    for(int i = 1; i<=n; i++){
        cin>> a[i];
    }
    f[1] = 0;
    f[0] = 0;
    for(int i = 2; i<=n; i++){
        if(i == 2)
            f[i] = f[i-1] + __abs(a[1], a[2]);
        else
            f[i] = min(f[i-1] + __abs(a[i], a[i-1]), f[i-2] + __abs(a[i], a[i-2]));
    }
    cout<< f[n];
    return 0;
}