#include<bits/stdc++.h>

#define el cout<<'\n'

using namespace std;

int f[55];
int Recursion(int n, int x, int y){
    if(n == 0)
        return 1;
    int h = f[n];
    int w = f[n+1];
    int dx, dy;
    if(y > w - h && y <= h)
    //middle rectangle
        return 0;
    if(y < w-h)
        dx = y;
    else
        dx = y - h;
    dy = x;
    return Recursion(n-1, dx, dy);
}

void Solve(){
    int n, x, y;
    cin>> n;
    cin >> x>> y;
    cout<<((Recursion(n, x, y)) ? "YES" : "NO"), el;
}

main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    f[0] = 1;
    f[1] = 1;
    for(int i = 2; i<50; i++){
        f[i] = f[i-1] + f[i-2];
    }
    int test;
    cin>>test;
    for(int t = 1; t <=test; t++){
        Solve();
    }
}