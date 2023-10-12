#include<bits/stdc++.h>
#define MAX_N (200005)
using namespace std;

int a[MAX_N], f[MAX_N];

void Solve(){
    string s;
    cin>> s;
    int longest = 0;
    int cur = 0;
    int ans = MAX_N;
    for(int ch = 'a'; ch <= 'z'; ch++){
        longest = 0;
        cur = 0;
        for(int i = 0; i< s.size(); i++){
            if((int) s[i] != ch)
                cur++;
            else
                cur = 0;
            longest = max(longest, cur);
        }
        //cout<<longest<<" "<< ch<<'\n';
        ans = min(ans, f[longest]);
    }
    cout<<ans<<'\n';
    return;
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int test;
    cin>>test;
    for(int i = 1; i<= MAX_N - 5; i++){
        f[i] = f[i/2] + 1;
    }
    for(int i= 1; i<=test; i++){
        Solve();
    }
    return 0;
}