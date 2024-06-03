#include<bits/stdc++.h>
#define fi first
#define se second
#define oo (1e9+7)
#define pb push_back
#define mp make_pair
#define el cout<<'\n'
#define ll long long

using namespace std;

int maxArea(vector<int> &high){
    int n = high.size();
    int l = 0, r = n-1;
    int res = 0;
    while(l < r){
        res = max(res, min(high[l], high[r])*(r-l));
        if(high[l] < high[r]) l++;
        else r--;
    }
    return res;
}

main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    return 0;
}