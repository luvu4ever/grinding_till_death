#include<bits/stdc++.h>

using namespace std;

void Solve(){
    int a, b;
    cin>> a>> b;
    int ans = b - a;
    int per10 = 1;
    for(int i = 1; i<=9; i++){
        per10 *= 10;
        if(per10 > b) break;
        int start = a/per10;
        start*=per10;
        int end = b/per10;
        end*=per10;
        //cout<<start<<" "<<end<<'\n';
        ans += (end - start)/per10;
    }
    cout<<ans<<'\n';
    return;
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int test;
    cin>>test;
    for(int t = 1; t <= test; t++){
        Solve();
    }
}