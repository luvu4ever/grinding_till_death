#include<bits/stdc++.h>
#define MAX_N 1005
#define el cout<<'\n'

using namespace std;

int a[MAX_N];

void Solve(){
    int n;
    int x = 0;
    int recheck = 0;
    cin>>n;
    int temp = n;
    for(int i = 1; i<=n; i++){
        cin>>a[i];
        if(a[i] == 0)
            temp--;
        x = x xor a[i];
    }
    for(int i = 1; i<=n; i++){
        recheck = recheck xor (a[i] xor x);
    }
    if(recheck == 0)
        cout<<x, el;
    else    
        cout<< -1, el;
    // if(temp % 2 || x == 0)
    //     cout<< x, el;
    // else
    //     cout<< "-1" , el;
    return;
}

main(){
    int test;
    cin>>test;
    for(int t = 1; t <=test; t++){
        Solve();
    }
}