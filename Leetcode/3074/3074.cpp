#include<bits/stdc++.h>

using namespace std;

int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
    int sum = 0;
    for(int i = 0; i < apple.size(); i++){
        sum += apple[i];
    }
    sort(capacity.begin(), capacity.end(), greater<int>());
    for(int i = 0; i < capacity.size(); i++){
        if(sum <= capacity[i]){
            return i + 1;
        }else{
            sum -= capacity[i];
        }
    }
}

main(){
    return 0;
}