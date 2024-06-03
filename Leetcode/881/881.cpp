#include<bits/stdc++.h>
#define fi first
#define se second
#define oo (1e9+7)
#define pb push_back
#define mp make_pair
#define el cout<<'\n'
#define ll long long

using namespace std;

int numRescueBoats(vector<int>& people, int limit) {
    sort(people.begin(), people.end());
    int cnt = 0;
    int low = 0, high = people.size() - 1;
    while(low < high){
        if(people[low] + people[high] <= limit){
            low++;
            high--;
            cnt++;
        } else{
            high--;
            cnt++;
        }
    }
    if(low == high) cnt++;
    return cnt;
}

main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    vector<int> people = {1, 2}; 
    cout << numRescueBoats(people, 3);
    return 0;
}