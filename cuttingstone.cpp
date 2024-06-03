//---------LuvU----------
#include<bits/stdc++.h>
#define f1(i,a) for(int i=1; i<=a; ++i)
#define f0(i,a) for(int i=0; i<a; ++i)
#define fi first
#define se second
#define pb push_back
#define mp make_pair
#define pii pair<int,int>

using namespace std;

int basex, basey, basez;
int n;
int cutx[1005], cuty[1005], cutz[1005];
pair<int,int> rec[1005];

int cuttingStone1(int x, int y){
    int res = 0;
    f1(i, n){
        if(rec[i].fi <= x && rec[i].se <= y){
            res += min(cuttingStone1(x - rec[i].fi, y), cuttingStone1(x, y - rec[i].se));
        }
    }
    return res;
}

void solve(){

}

void case1input(){
    cin>>basex>>basey>>basez;
    cin>> n;
    f1(i, n){
        int x;
        cin >> x >> rec[i].fi >> rec[i].se;
        if(rec[i].fi > rec[i].se)
            swap(rec[i].fi, rec[i].se);
    }
    sort(rec+1, rec+n+1);

}

main()
{
    // freopen("inp.txt", "r", stdin);
    // freopen("out.txt", "w", stdout);
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> t;    
    f1(i, t){
        input();
        cout<<solve()<<'\n';
    }
    return 0;
}