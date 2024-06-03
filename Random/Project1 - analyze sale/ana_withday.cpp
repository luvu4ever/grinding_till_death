//---------LuvU----------
#include<bits/stdc++.h>
#define f1(i,a) for(int i=1; i<=a; ++i)
#define f0(i,a) for(int i=0; i<a; ++i)
#define fi first
#define se second
#define pb push_back
#define mp make_pair
#define pii pair<int,int>
#define el cout<<'\n'
#define MAX_N 100005

using namespace std;

int totalOrder = 0;
long long totalRevenue = 0;
map<string, long> revenue_of_shop;
map<pair<string, string>, int> custom;
typedef struct Time_and_price{
    string time;
    int price;
} TAP;

TAP buy_at[MAX_N];

bool cmp(TAP a, TAP b){
    return a.time.compare(b.time) < 0;
}

void DataInput(){
    string cid, pid, shop_id, time;
    int price;   
    do{
        cin>> cid;
        if(cid[0] == '#') return;
        cin >> pid >> price >> shop_id >> time;
        buy_at[++totalOrder].time = time;
        buy_at[totalOrder].price = price;
        totalRevenue += price;
        revenue_of_shop[shop_id] += price;
        custom[mp(cid, shop_id)] += price;
    } while(1);
    return;
}

int Binary_search(string time){
    int l = 1, r = totalOrder, mid;
    while(l<=r){
        mid = (l+r)/2;
        if(buy_at[mid].time.compare(time) < 0) l = mid+1;
        else r = mid-1;
    }
    return l;
}

//find the first one that <=time by binary search
int Binary_search_2(string time){
    int l = 1, r = totalOrder, mid;
    while(l<=r){
        mid = (l+r)/2;
        if(buy_at[mid].time.compare(time) <= 0) l = mid+1;
        else r = mid-1;
    }
    return l-1;
}

// int find(string time){
//     f1(i, totalOrder){
//         if(buy_at[i].time.compare(time)>=0) 
//             return i;
//     }
//     return totalOrder;
// }

// int find_high(string time){
//     for(int i = totalOrder; i>=0; --i){
//         if(buy_at[i].time.compare(time) <= 0) 
//             return i;
//     }
//     return totalOrder;
// }

void Precalc(){
    buy_at[0].time = "00:00:00";
    buy_at[0].price = 0;
    buy_at[++totalOrder].time = "23:59:59";
    buy_at[totalOrder].price = 0;
    sort(buy_at, buy_at+totalOrder, cmp);
    f1(i, totalOrder)
        buy_at[i].price += buy_at[i-1].price;
    return;
}

void Query(){
    string query;
    do{
        cin >> query;
        if(query[0] == '#') return;
        if(!query.compare("?total_number_orders")){
            cout << totalOrder-1, el;
            continue;
        }
        if(!query.compare("?total_revenue")){
            cout << totalRevenue, el;
            continue;
        }
        if(!query.compare("?revenue_of_shop")){
            string shop_id;
            cin >> shop_id;
            cout << revenue_of_shop[shop_id], el;
            continue;
        }
        if(!query.compare("?total_consume_of_customer_shop")){
            string cid, shop_id;
            cin >> cid >> shop_id;
            cout << custom[mp(cid, shop_id)], el;
            continue;
        }
        string time1, time2;
        cin >> time1 >> time2;
        int t2 = Binary_search_2(time2), t1 = Binary_search(time1);
        // cout<< t1-1 << " " << t2, el;
        cout<< buy_at[t2].price - buy_at[t1-1].price, el;
    } while (1);
    return;
}

main()
{
    // freopen("inp.txt", "r", stdin);
    // freopen("out.txt", "w", stdout);
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    DataInput();
    Precalc();
    Query();
    return 0;
}