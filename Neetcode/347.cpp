//---------LuvU----------
#include<bits/stdc++.h>
#define f1(i,a) for(int i=1; i<=a; ++i)
#define f0(i,a) for(int i=0; i<a; ++i)
#define fi first
#define se second
#define pb push_back
#define mp make_pair
#define pii pair<int,int>
#define MAX_N 1000005

using namespace std;

int cnt[MAX_N];
int check[MAX_N];
pair<int, int> a[MAX_N];
int run;

vector<int> topKfrequent(vector<int> &nums, int k){
    f0(i, nums.size()){
        cnt[nums[i]]++;
    }
    f0(i, nums.size()){
        if(cnt[nums[i]] == 0) continue;
        a[run].fi = cnt[nums[i]];
        cnt[nums[i]] = 0;
        a[run++].se = nums[i];
    }
    sort(a, a+run);
    vector<int> ans;
    for(int i=run-1; i>=run-k; --i){
        ans.pb(a[i].se);
    }
    for(int i=0; i<ans.size(); ++i){
        cout<< ans[i] << " ";
    }
    return ans;
}

main()
{
    // freopen("inp.txt", "r", stdin);
    // freopen("out.txt", "w", stdout);
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    vector<int> nums;
    int n, k, x;
    cin>> n >> k;
    f1(i, n){
        cin>> x;
        nums.pb(x);
    }
    topKfrequent(nums, k);
    return 0;
}