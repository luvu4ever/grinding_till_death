#include<bits/stdc++.h>

using namespace std;

vector<int> partitionLabels(string s) {
        int n = s.length();
        int first[30], last[30];
        for(int i = 0; i< 30; i++){
            first[i] = -1;
            last[i] = 0-1;
        }
        for(int i = 0; i<n; i++){
            if(first[s[i] - 'a'] == -1)
                first[s[i] - 'a'] = i;
            last[s[i] - 'a'] = i;
        }   
        int start_pos = 0;
        int last_pos = last[s[0] - 'a'];
        vector<int> ans;
        while(start_pos < n){
            last_pos = last[s[start_pos] - 'a'];
            for(int i = 0; i<=('z'-'a'); i++){
                if(first[i] < last_pos && first[i] > start_pos){
                    last_pos = max(last_pos, last[i]);
                }
            }
            ans.push_back(last_pos - start_pos + 1);
                start_pos = last_pos + 1;
        }
        return ans;
    }

    int main(){
        string s;
        cin >> s;
        partitionLabels(s);      
    }