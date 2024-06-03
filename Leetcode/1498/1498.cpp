#include<bits/stdc++.h>
#define fi first
#define se second
#define oo (1e9+7)
#define pb push_back
#define mp make_pair
#define el cout<<'\n'
#define ll long long

using namespace std;

ll pow(ll a, ll b){
    ll res = 1;
    if(!b) return 1;
    if(b % 2) return a * pow(a, b-1) % 1000000007;
    res = pow(a, b/2);
    res = res * res % 1000000007;
    return res;
}

int numSubseq(vector<int> &nums, int target){
    sort(nums.begin(), nums.end());
    int high = nums.size() - 1;
    int low = 0;
    ll ans =0;
    while(low <= high){
        if(nums[low] + nums[high] <= target){
            ans += pow(2, high - low);
            ans %= 1000000007;
            low++;
        } else high --;
    }
    return ans;
}

main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    vector<int> nums = {14,4,6,6,20,8,5,6,8,12,6,10,14,9,17,16,9,7,14,11,14,15,13,11,10,18,13,17,17,14,17,7,9,5,10,13,8,5,18,20,7,5,5,15,19,14};
    cout<<numSubseq(nums, 22);
    return 0;
}