#include <bits/stdc++.h>
#define f1(i, a) for (int i = 1; i <= a; ++i)
#define f0(i, a) for (int i = 0; i < a; ++i)
#define fi first
#define se second
#define pb push_back
#define mp make_pair
#define MAX_N 1005

using namespace std;

int heights[MAX_N];
int l[MAX_N], r[MAX_N];
int matrix[MAX_N][MAX_N];
stack<int> sleft, sright;
int row, col;

int Get_max(vector<int> &heights){
    int n = heights.size();
    for (int i = 0; i < n; i++)
    {
        int last = 0;
        while (!sleft.empty() && heights[i] <= heights[sleft.top()])
            sleft.pop();
        if(sleft.empty()){
            l[i] = 0;
            sleft.push(i);
            continue;
        }
        l[i] = sleft.top() + 1;
        sleft.push(i);

    }

    for(int i = n-1; i>=0; i--){
        while(!sright.empty() && heights[i] <= heights[sright.top()])
            sright.pop();
        if(sright.empty()){
            r[i] = n-1;
            sright.push(i);
            continue;
        }
        r[i] = sright.top() - 1;
        sright.push(i);
    }
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans= max(ans, heights[i] * (r[i] - l[i] + 1));
    }
    return ans;
}

main()
{
    cin >> row >> col;
    for (int i = 0; i < row; ++i){
        for(int j = 0; j< col; ++j)
            cin >> matrix[i][j];
    }
    for(int i = 0; i<row; i++){
        for(int j = 0; j<col; j++){
            if(a[i][j] == '0')
                heights[j] = 0;
            else 
                heights[j]+=1;
        }
    }
    return 0;
}