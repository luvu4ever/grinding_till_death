#include<bits/stdc++.h>

#define MAX_N 300005

using namespace std;

int a[MAX_N];

void Solve(){
    int n;
    cin >> n;
    for(int i =1 ; i<=n; i++){
        cin>>a[i];
    }
    if(n%2){
        cout<<"YES\n";
        return;
    }
    for(int i = 2; i < n; i++){
        a[i+1] -= (a[i] - a[i-1]);
        a[i] = a[i-1];
    }
    if(a[n] >= a[n-1]){
        cout<<"YES\n";
        return;
    }
    cout<<"NO\n";
    return;
}

main(){
    int test;
    cin>>test;
    for(int t = 1; t <=test; t++){
        Solve();
    }
    return 0;
}