#include<bits/stdc++.h>

using namespace std;

long long maximumHappinessSum(vector<int>& happiness, int k) {
    long long res = 0;
    int n = happiness.size();
    sort(happiness.begin(), happiness.end(), greater<int>());
    for(int i = k-1; i>=0; i--){
        res += max(0, happiness[i] - i);
    }
    return res;
}

main(){
    return 0;
}