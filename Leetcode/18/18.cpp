#include<bits/stdc++.h>

using namespace std;

vector<vector<int>> fourSum(vector<int>& nums, int target) {
    vector<vector<int>> ans;
    set<vector<int>> s;
    sort(nums.begin(), nums.end());
    for(int i = 0; i < nums.size(); i++){
        for(int j = i+1; j < nums.size(); j++){
            int left = j+1;
            int right = nums.size()-1;
            while(left < right){
                if(nums[i] + nums[j] + nums[left] + nums[right] == target){
                    s.insert({nums[i], nums[j], nums[left], nums[right]});
                    left++;
                    right--;
                }else{
                    if(nums[i] + nums[j] + nums[left] + nums[right] < target){
                        left++;
                    }else{
                        right--;
                    }
                }
            }
        }
    }    
    for(auto x: s){
        ans.push_back(x);
    }
    return ans;
}   

main(){

}