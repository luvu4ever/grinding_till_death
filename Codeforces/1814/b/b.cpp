#include<bits/stdc++.h>

using namespace std;

void Solve(){
    int x, y;
    cin>> x>> y;
    int ans = 2e9;
    for(int i = 1; i<=60000; i++){
        ans = min(ans, i-1 + x/i + y/i + (x%i>0) + (y%i>0));
    }
    cout<<ans<<'\n';
}

main(){
    int test;
    cin>>test;
    for(int i = 1; i<=test; i++){
        Solve();
    }
}