#include<bits/stdc++.h>
using namespace std;
    
    void Recursion(int cur, int n, int curopen, int totalopen, string &s, vector<string>& ans){
        if(cur == n){
            ans.push_back(s);
            return;
        }
        if(totalopen < n/2){
            s[cur] = '(';
            Recursion(cur+1, n, curopen+1, totalopen+1, s, ans);
            s[cur] = 'x';
        }
        if(curopen > 0){
            s[cur] = ')';
            Recursion(cur + 1, n, curopen - 1, totalopen, s, ans);
            s[cur] = 'x';
        }
        return;
    }

    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        string s="xxxxxxxxxxxxxxxx";
        Recursion(0, n*2, 0, 0, s, ans);
        return ans;
    }

int main(){
    int n;
    cin>>n;
    generateParenthesis(n);
}