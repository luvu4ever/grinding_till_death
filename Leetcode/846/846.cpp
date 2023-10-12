#include<bits/stdc++.h>
// #define for(i,a,b) for(int i=a; i<=b; ++i)
// #define f0(i,a) for(int i=0; i<a; ++i)
// #define fi first
// #define se second
#define pb push_back
// #define mp make_pair

using namespace std;

bool isNStraightHand(vector<int>& hand, int groupSize) {
        int n = hand.size();
        vector<int> dd;
        if(n%groupSize)
            return 0;
        int group = n / groupSize;
        for(int i = 0; i<n; i++)
            dd.push_back(0);
        while(group > 0){
            int min_card = 1000000009, min_pos = -1;
            for(int i = 0; i<n; i++){
                if(!dd[i] && min_card > hand[i]){
                    min_card = hand[i];
                    min_pos = i;
                }
                // if(dd[i] != 1 && max_card < hand[i]){
                //     max_card = hand[i];
                //     max_pos = i;
                // }
            }
            int check[100005];
            for(int i = 0; i<groupSize; i++){
                check[i] = 0;
            }
            check[0] = 1;
            dd[min_pos] = 1;
            int check_left = groupSize-1;
            for(int i = 0; i<n; i++){
                if(!dd[i] && hand[i] > min_card && hand[i] <= min_card + groupSize - 1){
                    if(check[hand[i] - min_card])
                        continue;
                    check[hand[i] - min_card] = 1;
                    dd[i] = 1;       
                    check_left--;
                }
            }
            if(check_left > 0)
                return 0;
            group -=1;
        }
        return 1;
    }

main()
{
    int n, gs;
    vector<int> gas;
    cin >> n>> gs;
    for(int i = 1; i<=n; i++){
        int x;
        cin>> x;
        gas.pb(x);
    }
    cout<<isNStraightHand(gas, gs);
    return 0;
}