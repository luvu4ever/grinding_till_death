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

int longestConsecutive(vector<int>& nums) {
    map<int, int> m;
    int ans = 1;
    for(int i=0; i<nums.size(); ++i){
        if(m[nums[i]]) continue;
        m[nums[i]] = 1;
        if(m[nums[i]-1]){
            m[nums[i]] += m[nums[i]-1];
            m[nums[i] - m[nums[i]] + 1] = m[nums[i]];
        }
        if(m[nums[i]+1]){
            m[nums[i]] += m[nums[i]+1];
            m[nums[i] + m[nums[i]] - 1] = m[nums[i]];
        }
        ans = max(ans, m[nums[i]]);
        for(int j = 0; j<=i; ++j){
            cout<<nums[j] << ":"<<m[nums[j]]<<" ";
        }
        cout<<endl;
    }
    return ans;
}

main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    vector<int> nums = {0,3,7,2,5,8,4,6,0,1};
    cout<<longestConsecutive(nums);
    return 0;
}