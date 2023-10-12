#include<bits/stdc++.h>

#define el cout<<'\n'

using namespace std;

void Solve(){
    string s;
    cin>> s;
    int ans;
    int count = 0;
    if(s[0] == '0'){
        cout<<0, el;
        return;
    }
    if(s[0] == '?'){
        ans = 9;
        count++;
    }
    else
        ans = 1;
    for(int i = 1; i< s.length(); i++){
        if(s[i] == '?'){
            ans*=10;
            count++;
        }
    }
    if(count == 0){
        cout<<1, el;
        return;
    }
    cout<<ans, el;
    return;
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int test;
    cin>>test;
    for(int t = 1; t <= test; t++){
        Solve();
    }
    return 0;

}