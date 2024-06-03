#include<bits/stdc++.h>

using namespace std;

bool containsNearbyDuplicate(vector<int>& nums, int k) {
    map<int, int> cnt;
    for(int i = 0; i<min(k, nums.size()); ++i){
        cnt[nums[i]]++;
        if(cnt[nums[i]] > 1)
            return true;
    }
    for(int i = k; i<nums.size(); ++i){
        cnt[nums[i]]++;
        if(cnt[nums[i]] > 1){
            return true;
        }
        cnt[nums[i-k]]--;
    }
    return false;
}

main(){

}