#include<bits/stdc++.h>

using namespace std;

int findPeakElement(vector<int> &a){
    int low = 0;
    int high = a.size() - 1;
    while(low <= high){
        int mid = low + (high - low) / 2; 
        if(a[mid] > a[mid + 1] && a[mid] > a[mid - 1])
            return mid;
        if(a[mid] < a[mid + 1])
            low = mid + 1;
        else
            high = mid - 1;
    }
    return low;
}

main(){
    vector<int> a = {2,1};
    cout << findPeakElement(a);
    return 0;
}