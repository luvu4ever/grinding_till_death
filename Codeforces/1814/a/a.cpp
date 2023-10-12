#include<bits/stdc++.h>

using namespace std;

void Solve(){
    long long n, k;
    cin>> n>> k;
    if(!n%2){
        cout<<"YES\n";
        return;
    }
    if(k > n){
        cout<<"NO\n";
        return;
    }
    if(k%2==0 && n%2==1){
        cout<<"NO\n";
        return;
    }
    cout<<"YES\n";
    return;
}

main(){
    int test;
    cin>>test;
    for(int i = 1; i<=test; i++){
        Solve();
    }
}