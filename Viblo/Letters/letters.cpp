#include<bits/stdc++.h>
#define MAX_N (1000005)
using namespace std;

int a[MAX_N], b[MAX_N];

main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n;
    cin>>n;
    string s;
    cin>>s;
    if(n == 1){
        cout<< 0;
        return 0;
    }
    for(int i = 0; i<=n; i++){
        a[i] = 0;
        b[i] = 0;
    }
    if(s[0] == '?')
        s[0] = 'a';
    // a[i] = sum if ? is a
    // b[i] = sum if ? is b
    for(int i = 1; i<n; i++){
        if(s[i] == 'a'){
            a[i] = max(b[i-1] - 1, a[i-1]);
            b[i] = -MAX_N;
            //cout<< i+1<<" "<<a[i]<<" "<<b[i]<<'\n';
            continue;
        }
        if(s[i] == 'b'){
            b[i] = max(b[i-1], a[i-1] + 1);
            a[i] = -MAX_N;
            //cout<< i+1<<" "<<a[i]<<" "<<b[i]<<'\n';
            continue;
        }
        if(s[i-1] == 'a'){
            a[i] = a[i-1];
            b[i] = a[i-1] + 1;
            //cout<<i+1<<" "<<a[i]<<" "<<b[i]<<'\n';
            continue;
        }
        if(s[i-1] == 'b'){
            a[i] = b[i-1] - 1;
            b[i] = b[i-1];
            //cout<<i+1<<" "<<a[i]<<" "<<b[i]<<'\n';
            continue;
        }
        if(s[i-1] == '?'){
            a[i] = max(a[i-1] , b[i-1] -1);
            b[i] = max(b[i-1], a[i-1] + 1);
        }
        //cout<<i+1<<" "<<a[i]<<" "<<b[i]<<'\n';
    }
    cout<<max(a[n-1], b[n-1]);
    return 0;
}