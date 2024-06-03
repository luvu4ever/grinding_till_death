#include<bits/stdc++.h>
#define fi first
#define se second
#define oo (1e9+7)
#define pb push_back
#define mp make_pair
#define el cout<<'\n'
#define ll long long

using namespace std;

vector<int> rearrangeArray(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    vector<int> res;
    int low = 0, high = nums.size() - 1;
    while(low < high){
        res.push_back(nums[low]);
        res.push_back(nums[high]);
        low++;
        high--;
    }        
    if(low == high) res.push_back(nums[low]);
    return res;
}

main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    return 0;
}