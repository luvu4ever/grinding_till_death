#include<bits/stdc++.h>

#define MAX_N 200005
using namespace std;

int a[MAX_N], b[MAX_N];

void Solve(){
    int n;
    cin>>n;
    for(int i = 1; i<=n; i++){
        cin>>a[i];
    }
    a[n+1] = INT_MAX;
    for(int i = 1; i<=n; i++){
        cin>>b[i];
    }
    b[n+1] = INT_MAX;
    int start, end;
    for(int i = 1; i<= n; i++){
        if(a[i] != b[i]){
            start = i;
            break;
        }
    }
    int temp = start;
    for(int i = temp; i>=1; i--){
        if(b[i] <= b[i+1]){
            start = i;
        }
        else break;
    }
    for(int i = n; i>=1; i--){
        if(a[i] != b[i]){
            end = i;
            break;
        }
    }
    temp = end;
    for(int i = temp; i<=n; i++){
        if(b[i] >= b[i-1]){
            end = i;
        }
        else break;
    }
    cout<<start<<" "<<end<<'\n';
    return;
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int test;
    cin>>test;
    for(int t =1 ; t <=test; t++){
        Solve();
    }
    return 0;
}