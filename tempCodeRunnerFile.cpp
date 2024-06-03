//---------LuvU----------
#include<bits/stdc++.h>
#define f1(i,a) for(int i=1; i<=a; ++i)
#define f0(i,a) for(int i=0; i<a; ++i)
#define fi first
#define se second
#define pb push_back
#define mp make_pair
#define pii pair<int,int>
#define MAX_N (5005)

using namespace std;

int n,  m;
int a[MAX_N];
int f[MAX_N][MAX_N];

int solve(int i, int j, int target){
    int res = 0;
    int left = i, right = j;
    while(left < right){
        if(a[left] + a[right] == target){
            if(a[left] == a[right]){
                res += (right - left) * (right - left + 1) / 2;
                break;
            }
            left++;
            right--;
        }
        else if(a[left] + a[right] < target){
            left++;
        }
        else{
            right--;
        }
    }
    return f[i][j] = res;
}

main()
{
    // freopen("inp.txt", "r", stdin);
    // freopen("out.txt", "w", stdout);
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int res = 0;
    cin >> n >> m;
    f1(i, n)
        cin >> a[i];
    sort(a+1, a+n+1);
    f1(i, n){
        f1(s1, n)
            f1(s2, n)
                f[s1][s2] = -1;
        res += solve(i+1, n, m - a[i]);
    }
    cout<<res;
    return 0;
}