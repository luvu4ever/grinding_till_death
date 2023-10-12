#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i = 1; i<=n; i++){
        int temp = i;
        int count = 0;
        while(temp > 0){
            count++;
            //cout<<(int)sqrt(temp) * (int)sqrt(temp)<<'\n';
            temp -= (int)sqrt(temp) * (int)sqrt(temp);
        }
        if(count >= 3)
            cout<<i<<'\n';
    }
    return 0;
}