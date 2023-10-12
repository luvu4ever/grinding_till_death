#include<bits/stdc++.h>
#define MAX_N 30
using namespace std;

int dem = 0;

int used_col[MAX_N], used_sub[MAX_N];
int used_sum[MAX_N];

int __abs(int x, int y){
    if(x > y)
        return x-y;
    return y-x;
}

void PrintAllOut(int n, int pos[]){
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=n; j++){
            if(j == pos[i])
                cout<<1;
            else cout<<0;
        }
        cout<<'\n';
    }
    cout<<'\n';
     dem++;
    return;
}

int CheckInvalid(int x, int y, int n, int pos[]){
    if(used_col[y] || used_sum[x+y])
        return 1;
    return 0;
}

void Recursion(int cur, int n, int pos[]){
    if(cur == n+1){
        PrintAllOut(n, pos);
        return;
    }
    for(int i = 1; i<=n; i++){
        if(CheckInvalid(cur, i, n, pos) == 1)
            continue;
        pos[cur] = i;
        used_col[i] = 1;
        used_sum[cur+i] = 1;
        Recursion(cur+1, n, pos);
        pos[cur] = 0;
        used_col[i] =0;
        used_sum[cur+i] = 0;
    }
    return;
}

main(){
    int n;
    cin>> n;
    int pos[MAX_N];
    Recursion(1, n, pos);
    cout<<dem;
    return 0;
}