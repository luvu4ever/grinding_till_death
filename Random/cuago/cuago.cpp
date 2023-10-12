#include<bits/stdc++.h>
#define MAX_N 100005

using namespace std;

long long n, a[MAX_N], f[MAX_N];

int main(){
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    sort(a, a+n);
    long long ans = 0, sum = a[0];
    for(int i=1; i<n; i++){
        ans += sum + a[i];
        sum = sum + a[i];
    }
    cout << ans;
}