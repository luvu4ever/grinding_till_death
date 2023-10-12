#include<bits/stdc++.h>

using namespace std;



main(){
    int t;
    cin>>t;
    for(int test =1; test<=t; test++){
        int n;
        cin>>n;
        int ans = n;
        ans += (n/2)*2;
        ans += (n/3)*2;
        cout<<ans<<'\n';
    }
    return 0;
}
//lcm = gcd => a==b
//lcm = 2*gcd => a = 2*b
// lcm = 3*gcd => a= 3*b