#include<bits/stdc++.h>

#define oo (1e9+7)
#define MOD
#define MAX_N
#define forr(i, a, b) for(int i = (a); i <= (b) ; ++i)
#define ford(i, a, b) for(int i = (a); i >= (b) ; ++i)
#define f1(i, n) for(int i = 1; i <= (n); ++i)
#define f0(i, n) for(int i = 0; i< (n); ++i)
#define first fi
#define second se
#define mp make_pair
#define pb push_back
#define all(a) (a).begin(), (a).end()
#define sz(x) ((int)(x).size())
#define el cout<<'\n'

typedef long long ll;
//typedef pair<int,int> pii;

using namespace std;

void Solve(){
    int n, k;
    cin >> n>> k;
    for(int i = 0; i<=n; i++){
        int cur = i*(i-1)/2 + (n-i)*(n-i-1)/2;
        if(cur == k){
            cout<<"YES", el;
            for(int j = 1; j<=i; j++){
                cout<< -1<<" ";
            }
            for(int j = i+1; j<=n; j++){
                cout<< 1 <<" "; 
            }
            el;
            return;
        } 
    }
    cout<<"NO",el;
}

main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int test;
    cin>> test;
    f1(i, test){
        Solve();
    }
    return 0;
}