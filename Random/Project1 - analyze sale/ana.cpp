#include<bits/stdc++.h>
using namespace std;

#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")

vector < pair<string , long > > product; // time and price
map< pair< string, string > , long > shop; // shop id, customer id and revenue
map< string, long > sr; // shop id and revenue

long totalRevenue = 0;
long totalOrder = 0;
long prefixSum[100001];
long sz ;

bool comp (pair<string, long > a, pair<string, long > b) {
    return a.first < b.first;
}

long revenueInTime(string a, string b) {
    int low = -1;
    int upp = -1;
    for(int i = 0 ; i < sz ; i ++) {
        if(product[i].first >= a) {
            low = i ;
            break;
        }
    }
    if(low == -1) {
        return 0;
    }
    for(int i = sz - 1 ; i >= low ; i -- ) {
        if(product[i].first <= b) {
            upp = i ;
            break;
        }
    }
    if(upp == -1) {
        return 0;
    }
    return prefixSum[upp+1] -prefixSum[low];
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    string cid, pid, sid, time;
    long price;
    cin >> cid ;
    while(cid[0] != '#') {
        cin  >> pid >> price >> sid >> time;

        product.push_back({time, price});
        shop[{sid, cid}] += price;
        sr[sid] += price;
        totalOrder ++;
        totalRevenue += price; 

        cin >> cid ;
    }
    sort(product.begin(), product.end(), comp);
    sz = product.size();
    prefixSum[0] = 0;
    for(int i = 1 ; i <= sz ; i++ ) {
        prefixSum[i] = prefixSum[i-1] + product[i-1].second ;
    }
   
    string query, timeFrom, timeTo, shopId, cusId;
    cin >> query;
    while(query[0] != '#' ) {
        if(query[8] == '_') {  
            cin >> shopId ;
            cout << sr[shopId]<< "\n";
            cin >> query;
            continue;
        }
        if(query[8] == 'o') {
            cin >> cusId >> shopId ;
            cout << shop[{shopId,cusId}] << "\n";
            cin >> query ;
            continue;
        }
        if(query[8] == 'e' && query[15] == 'i') {
            cin >> timeFrom >> timeTo;
            cout << revenueInTime(timeFrom, timeTo) << "\n";
            cin >> query;
            continue;
        }        
        if(query[8] == 'u') {
            cout << totalOrder << "\n";
            cin >> query ;
            continue;
        }
        if(query[8] == 'e') {
            cout << totalRevenue << "\n";
            cin >> query;
            continue;
        } 
    }

}