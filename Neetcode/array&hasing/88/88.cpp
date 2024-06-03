#include <bits/stdc++.h>
using namespace std;
void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int pos1 = m-1;
        int pos2 = n-1;
        int total_pos = m+n-1;
        while(total_pos >= 0){
            if(pos1 == -1){
                nums1[total_pos] = nums2[pos2];
                total_pos--;
                pos2--;
                continue;
            }
            if(pos2 == -1){
                nums1[total_pos] = nums1[pos1];
                total_pos--;
                pos1--;
                continue;
            }
            if(nums1[pos1] >= nums2[pos2]){
                nums1[total_pos] = nums1[pos1];
                total_pos--;
                pos1--;
                continue;
            }
            if(nums2[pos2] >= nums1[pos1]){
                nums1[total_pos] = nums2[pos2];
                total_pos--;
                pos2--;
                continue;
            }
        }
    }
main()
{
    vector<int> nums1 = {1, 2, 3, 0, 0, 0};
    vector<int> nums2 = {2, 5, 6};
    merge(nums1, nums1.size() - nums2.size(), nums2, nums2.size());
}