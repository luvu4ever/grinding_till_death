#include<bits/stdc++.h>
#define f1(i,a) for(int i=1; i<=a; ++i)
#define f0(i,a) for(int i=0; i<a; ++i)
#define fi first
#define se second
#define pb push_back
#define mp make_pair
#define MOD 1000000007

using namespace std;

int t;
long long n, m, x;

long long countDigit(long long n){
    if(n == 0)
        return 1;
    int count = 0;
    while(n!= 0){
        n /=10;
        ++count;
    }
    return count;
}

long long fast_power(long long base, long long power) {
    long long result = 1;
    while(power > 0) {

        if(power % 2 == 1) {
            result = (result*base);
        }
        base = (base * base);
        power = power / 2;
    }
    return result;
}

main()
{
    cin>> t;
    while(t--){
        cin>> x >> n >> m;
        long long c = countDigit(x);
        long long base = 1;
        long long powofc = fast_power(10, c) - 1;
        long long remainder = fast_power(10, n*c) - 1;
        cout << ((x%m) * ((remainder/powofc)) % m)<<'\n';
    }
    return 0;
}