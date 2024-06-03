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

int n;
int a[100005];
map<int, int> cnt;
int ans;

main()
{
    // freopen("inp.txt", "r", stdin);
    // freopen("out.txt", "w", stdout);
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> n;
    f1(i, n){
        cin >> a[i];
        a[i] += 100005;
        cnt[a[i]]++;
    }
    sort(a+1, a+n+1);
    f1(b, n){
        f1(c,n){
            ans+=cnt[a[b]+a[c]];
        }
    }
    cout << ans;
    return 0;
}