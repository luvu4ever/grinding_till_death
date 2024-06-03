#include <bits/stdc++.h>
#define fi first
#define se second
#define oo (1e9 + 7)
#define pb push_back
#define mp make_pair
#define el cout << '\n'
#define ll long long

using namespace std;

void rotate(vector<int> &nums, int k){
    int n = nums.size();
    k %= n;
    deque<int> dq;
    for (int i = 0; i < k; i++){
        dq.push_back(nums[i]);
        nums[i] = nums[n - k + i];
        continue;
    }
    for(int i = k; i < n; i++){
        dq.push_back(nums[i]);
        nums[i] = dq.front();
        dq.pop_front();
    }
}

main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
    rotate(nums, 3);
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }
    return 0;
}