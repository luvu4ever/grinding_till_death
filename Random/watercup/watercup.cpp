#include<bits/stdc++.h>

#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define MAX_N 1005
#define Heso 1000

using namespace std;

queue<pair<int, int>>q;

int max1, max2, order;
int check[MAX_N][MAX_N];
int par[MAX_N][MAX_N];

int Cal(int cur1, int cur2){
    return cur1 * Heso + cur2;
}

int BFS(){
    q.push(mp(0,0));
    int count = 0;
    while(!q.empty()){
        int cur1 = q.front().fi;
        int cur2 = q.front().se;
        q.pop();
        if(check[cur1][cur2]) continue;
        if(cur1 + cur2 == order || cur1 == order || cur2 == order){
            int temp = cur1 * Heso + cur2;
            while(temp != 0){
                printf("%d %d %d\n", temp/Heso, temp%Heso, count++);
                temp = par[temp/Heso][temp%Heso];
            }
            break;
            return count;
        }
        check[cur1][cur2] = 1;
        int sum = cur1 + cur2;

        if(!check[cur1][max2]){
            q.push(mp(cur1, max2));
            par[cur1][max2] = Cal(cur1, cur2);
        }

        if(!check[max1][cur2]){
            q.push(mp(max1, cur2));
            par[max1][cur2] = Cal(cur1, cur2);
        }
        if(!check[0][cur2]){
            q.push(mp(0, cur2));
            par[0][cur2] = Cal(cur1, cur2);
        }
        if(!check[cur1][0]){
            q.push(mp(cur1, 0));
            par[cur1][0] = Cal(cur1, cur2);
        }

        if(sum >= max2 && !check[sum-max2][max2]){
            q.push(mp(sum-max2, max2));
            par[sum-max2][max2] = Cal(cur1, cur2);
        }
        if(sum <= max2 && !check[0][sum]){
            q.push(mp(0,sum));
            par[0][sum] = Cal(cur1, cur2);
        }

        if(sum >= max1 && !check[max1][sum - max1]){
            q.push(mp(max1, sum-max1));
            par[max1][sum - max1] = Cal(cur1, cur2);
        }
        if(sum <= max1 && !check[sum][0]){
            q.push(mp(sum, 0));
            par[sum][0] = Cal(cur1, cur2);
        }
    }
    return count;
}

int main(){
    cin >> max1 >> max2 >> order;
    if(max1 > max2) swap(max1, max2);
    cout << BFS();
}