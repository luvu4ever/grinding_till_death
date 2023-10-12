#include<bits/stdc++.h>

#define MAX_MIN (1e9 + 5)
#define MAX_N (200005)

using namespace std;

int a[MAX_N], ans[MAX_N];

void Solve(){
    int n;
    int min_pos = 1;
    cin>> n;
    for(int i = 1; i<=n-1; i++){
        cin>>a[i];
        if(a[i] < a[min_pos])
            min_pos = i;
    }
    ans[min_pos] = a[min_pos];
    ans[min_pos + 1] = a[min_pos];
    int left = min_pos - 1;
    int right = min_pos + 2;
    a[0] = MAX_MIN;
    while(left > 0 || right < n){
        if(left > 0){
            ans[left] = min(a[left], a[left-1]);
            left--;
        }
        if(right < n){
            ans[right] = min(a[right-1], a[right]);
            right++;
        }
        //cout<<left<<" "<<right<<'\n';
    }
    ans[n] = a[n-1];
    for(int i = 1; i<=n; i++){
        cout<<ans[i]<<" ";
    }
    cout<<'\n';
    return;
}

main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int test;
    cin>>test;
    for(int t = 1; t <=test; t++){
        Solve();
    }
}