#include<bits/stdc++.h>

using namespace std;

main(){
    int test;
    cin>>test;
    for(int t = 1; t <= test; t++){
        string s;
        cin>> s;
        s = s + s;
        int cnt = 0;
        int maxx = 0;
        for(int i = 0; i<s.size(); i++){
            if(s[i] == '1')
                cnt++;
            else cnt = 0;
            maxx = max(maxx,cnt);
        }
        if(maxx == s.size())
            cout<< (long long) s.size() * s.size()/4;
        else if(maxx % 2)
            cout<< (long long) (maxx+1)*(maxx+1) / 4;
        else
            cout<<(long long) (maxx/2) *(maxx/2+1);
        cout<<'\n';
    }
    return 0;
}