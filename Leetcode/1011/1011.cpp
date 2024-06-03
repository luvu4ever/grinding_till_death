#include<bits/stdc++.h>

using namespace std;

int sum = 0;
int maxx = 0;

int check(int mid, int days, vector<int> &weights){
    int dayCount = 0;
    int cur_sum = 0;
    for(int i = 0; i < weights.size(); i++){
        if(cur_sum + weights[i] > mid){
            cur_sum = 0;
            dayCount++;
        }
        cur_sum += weights[i];
    }
    if(cur_sum > 0)
        dayCount++;
    return dayCount <= days;
}

int shipWithinDays(vector<int> &weights, int days){
    for(int i = 0; i < (weights.size()); i++){
        maxx = max(maxx, weights[i]);
        sum += weights[i];
    }
    int low = max(maxx, sum / days);
    int high = sum;

    while(low <= high){
        int mid = low + (high - low) / 2;
        if(check(mid, days, weights)){
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return low;
}

main(){
    vector<int> weights = {1,2,3,1,1};
    int days = 4;
    cout<< shipWithinDays(weights, days);
    return 0;
}