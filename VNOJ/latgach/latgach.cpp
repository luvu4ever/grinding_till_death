#include<bits/stdc++.h>

using namespace std;

main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin>> T;
    int f[105];
    for(int i = 1; i<=100; i++)
        f[i] = -1;
    f[1] = 1;
    f[2] = 2;
    int last = 3;
    for(int test = 1; test <= T; test++){
        int n;
        cin >> n;
        if(f[n] != -1){
            cout << f[n] <<'\n';
            continue;
        }
        for(int i = last; i<=n; i++){
            f[i] = f[i-1] + f[i-2];
        }
        cout<<f[n]<<'\n';
    }
    return 0;
}