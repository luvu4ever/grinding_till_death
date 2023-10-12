#include<bits/stdc++.h>

using namespace std;

long long __abs(int a){
    if(a > 0)
        return a;
    return -a;
}

void Solve(){
    long long a, b, c;
    cin >> a >> b >>c;
    long long ans = min(min(min(__abs(a+b+c), __abs(a+b-c)), min(__abs(a+b*c), __abs(a-b+c))), min(min(__abs(a-b-c), __abs(a-b*c)), min(__abs(a*b+c), __abs(a*b-c))));
    ans = min(ans, __abs(a*b*c));
    cout<<ans<<'\n';
    return;    
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int test;
    cin>>test;
    for(int t = 1; t<= test; t++){
        Solve();
    }
    return 0;
}