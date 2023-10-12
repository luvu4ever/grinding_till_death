#include<bits/stdc++.h>

using namespace std;

long long gcd(long long a, long long b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

int compare_fractions(long long num1, long long den1, long long num2, long long den2) {
    long long lcm = 1ll * (den1 * den2) / gcd(den1, den2);
    long long new_num1 = num1 * (lcm / den1);
    long long new_num2 = num2 * (lcm / den2);
    if (new_num1 == new_num2) {
        return 0;  // the fractions are equal
    } else if (new_num1 < new_num2) {
        return -1;  // the first fraction is less than the second fraction
    } else {
        return 1;  // the first fraction is greater than the second fraction
    }
}

main(){
    long long n, d;
    long long ans_ts, ans_ms;
    long long minn = 1e9;
    long long ms_ans = 1, ts_ans= 1;
    cin>> n >> d;
    for(long long ms = 1; ms <= 32767; ms++){
        long long ts = ms * n / d;
        long long ts_hieu = n * ms - ts * d;
        if(ts_hieu == 0)
            ts--;
        ts_hieu = n * ms - ts * d;
        long long ms_hieu = d * ms;
        long long min_ts_hieu = n * ans_ms - ans_ts * d;
        long long min_ms_hieu = d * ans_ms;
        if(compare_fractions(ts_hieu, ms_hieu, min_ts_hieu, min_ms_hieu) == -1){
            ans_ms = ms;
            ans_ts = ts;
        }
    }
    //cout<<compare_fractions(638, 2073112, 471, 70907788)<<'\n';
    cout<<ans_ts<<" "<<ans_ms;
}