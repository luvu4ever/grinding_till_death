#include<bits/stdc++.h>

#define MAX_N 100005

using namespace std;

int f[MAX_N], a[MAX_N];
int ans = 0;

int main(){
    int n;
    cin>> n;
    for(int i =1 ; i<=n; i++){
        cin>>a[i];
    }
    f[0] = 0;
    f[1] = 1;
    f[2] = 2;
    for(int i = 3; i<=n; i++){
        if(a[i] == a[i-1] + a[i-2])
            f[i] = f[i-1] + 1;
        else 
            f[i] = 2;
        ans= max(ans, f[i]);
    }
    // for(int i = 1; i<=n; i++){
    //     cout<<f[i]<<" ";
    // }
    if(ans == 2){
        cout<<"0\n";
        return 0;
    }
    cout<<ans<<'\n';
    return 0;
}