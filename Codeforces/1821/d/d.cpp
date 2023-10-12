#include<bits/stdc++.h>
#define MAX_N 200005

using namespace std;

int l[MAX_N], r[MAX_N];

void Solve(){
    int n, k;
    cin>> n>> k;
    for(int i = 1; i<=n; i++){
        cin>>l[i];
    }
    for(int i = 1; i<=n; i++){
        cin>>r[i];
    }
    int count = 0;
    int possible = 0;
    int ans = 0;
    int last = 0;
    int best_last = 0;
    for(int i = 1; i<=n; i++){
        if(l[i] == r[i])
            count++;
        if(possible >= k){
            last = i;
        }
        if(possible >= k + count){
            best_last = i;
            break;
        }
    }
    // int last_pos = l[last];
    // for(int i = last_pos; i<= last_pos + count; i++){
    //     for(int j = last; j <=best_last; j++){
    //         if(l[j] <= i && r[j] >= i)
    //             ans--;
    //     }
    // }

    return;
}

main(){
    int test;
    cin>> test;
    for(int t = 1; t <=test; t++){
        Solve();
    }
    return 0;
}