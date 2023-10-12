#include<bits/stdc++.h>
 
#define oo (1e9+7)
#define MOD
#define MAX_N (100005)
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
 
int n, k;
 
int Solve(){
    int cnt = 0;
    cin>> n >> k;
    f1(i, n){
        int x;
        cin>> x;
        if(x % k != i % k)
            cnt++;
    }
    if(cnt == 0)
        return 0;
    if(cnt == 2)
        return 1;
    return -1;
}
 
main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int test;
    cin>>test;
    f1(i, test) 
        cout<< Solve(), el;
    return 0;
}