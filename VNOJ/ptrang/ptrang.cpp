#include <bits/stdc++.h>
#define MAX_N 6005
using namespace std;

int ans = 0, f[MAX_N];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, l;
    cin >> n>> l;
    for(int i =1 ; i<=n; i++){
        cin>>a[i];
    }
    f[0] = 0;
    for(int i = 1; i<=n; i++){
        int sum = 0;
        int cur = i;
        for(cur = i; j>0; j--){
            sum += a[i];
            if(sum > l) 
                break;
        }
        f[i] = max(f[cur], sum-a[cur]);
    }
    return 0;
}