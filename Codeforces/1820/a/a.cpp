#include<bits/stdc++.h>

using namespace std;

main(){
    int test;
    cin>>test;
    for(int t = 1; t <= test; t++){
        string s;
        cin >> s;
        int ans = 0;
        if(s[0] == '_')
            ans = 1;
        if(s.size() == 1 && s[0] =='^')
            ans=1;
        for(int i = 0; i< s.size(); i++){
            if(s[i] == '_' && s[i+1] != '^')
                ans++;
        }
        cout<<ans<<'\n';
    }
    return 0;
}