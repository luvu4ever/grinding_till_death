#include<bits/stdc++.h>

using namespace std;

vector<string> shortestSubstrings(vector<string>& arr) {
    map<string, int> cnt;
    for(auto s : arr){
        string temp = "";
        for(int i = 0; i < s.size(); i++){
            temp = s[i] + temp;
            cnt[temp]++;
        }
    }
    for(auto s : arr){
        string res = "";
    }
}

main(){
    return 0;
}