#include<bits/stdc++.h>

using namespace std;

vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
    sort(potions.begin(), potions.end());

    vector<int> result;
    for(int i = 0; i < spells.size(); i++){
        long long low = 0;
        long long high = potions.size() - 1;
        while(low <= high){
            long long mid = low + (high - low) / 2;
            if(1ll * spells[i] * potions[mid] < success){
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        result.push_back(potions.size() - low);
    }
    return result;
}