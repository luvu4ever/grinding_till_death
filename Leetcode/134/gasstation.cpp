#include<bits/stdc++.h>
// #define for(i,a,b) for(int i=a; i<=b; ++i)
// #define f0(i,a) for(int i=0; i<a; ++i)
// #define fi first
// #define se second
 #define pb push_back
// #define mp make_pair

using namespace std;

int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int n = gas.size();
        int start_pos = 0, last_pos = -1;
        int sum = 0, best = 0, minn = 0;
        for(int i = 0; i<2*n; i++){
            int cur_pos = i%n;
            if(cur_pos == last_pos && cur_pos != 0)
                break;
            sum += gas[cur_pos] - cost[cur_pos];
            if(best < sum - minn){
                best = sum - minn;
                last_pos = cur_pos; 
            }
            if(sum < minn){
                minn = sum;
                start_pos = i+1;
            }
        }
        int cur_tank = 0;
        for(int i = 0; i<n; i++){
            int cur_pos = (start_pos + i) % n;
            cur_tank += gas[cur_pos] - cost[cur_pos];
            if(cur_tank < 0)
                return -1;
        }
        return start_pos%n;
    }

main()
{
    vector<int> gas, cost;
    int n;
    cin>> n;
    for(int i = 1; i<=n; i++){
        int x;
        cin>> x;
        gas.pb(x);
    }
    for(int i = 1; i<=n; i++){
        int x;
        cin>> x;
        cost.pb(x);
    }
    cout<<canCompleteCircuit(gas, cost);
    return 0;
}