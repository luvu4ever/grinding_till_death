#include<bits/stdc++.h>

#define MAX_N 100005
#define MOD (1000000007)
#define el cout<<'\n'

using namespace std;

int __abs(int x){
    if(x >0)
        return x;
    return -x;
}

int n,m;
long long x[MAX_N], y[MAX_N];
long long ans = 0;

int main(){
    cin >> n >> m;
    for(int i = 1; i<=n; i++){
        cin>>x[i];
    }   
    for(int i = 1; i<=m; i++){
        cin>>y[i];
    }
    sort(x+1, x+n+1);
    sort(y+1, y+m+1);
    long long w = 0, h=0;
    long long prew = 0;

    for(int i = n; i>=1; i--){
        w += (i-1) * x[i] - (n-i) * x[i];
    }
    for(int i = m; i>=1; i--){
        h += (i-1) * y[i] - (m-i) * y[i];
    }
    cout<<w*h % MOD;
}