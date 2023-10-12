#include<bits/stdc++.h>

#define MAX_N 20

using namespace std;

int ans, female;

void Recursion(int cur, int n,int k, int female, int bit[]){
    if(cur == n+1){
        // for(int i = 1; i<=n; i++){
        //     cout<< bit[i]<<" ";
        // }
        // cout<<endl;
        ans++;
        return;
    }
    bit[cur] = 0;
    Recursion(cur+1, n,k, female+1, bit);
    if(female >= k){
        bit[cur] = 1;
        Recursion(cur+1, n, k, 0, bit);
    }
}

main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, k;
    cin >> n >> k;
    int bit[MAX_N];
    Recursion(1, n,k,MAX_N, bit);
    cout<<ans;
    return 0;
}