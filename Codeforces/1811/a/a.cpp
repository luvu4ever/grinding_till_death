#include<bits/stdc++.h>

using namespace std;

main(){
    int test;
    cin>>test;
    for(int t = 1; t <=test; t++){
        int n;
        cin>>n;
        int digit;
        cin>>digit;
        string s;
        cin>>s;
        for(int i = 0; i<n; i++){
            if((int)(s[i]-'0') < digit){
                cout<<digit;
                digit = -1;
            }
            cout<<s[i];
        }
        if(digit != -1)
            cout<<digit;
        cout<<'\n';
    }
    return 0;
}