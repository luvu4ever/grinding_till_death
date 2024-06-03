#include<bits/stdc++.h>

using namespace std;

int singleNonDuplicate(vector<int> &a){
    if (a.size() == 1)
        return 0;
    int left = 0;
    if (a[left] != a[left + 1])
        return left;
    int right = a.size() - 1;
    if (a[right] != a[right - 1])
        return right;
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (a[mid] != a[mid - 1] && a[mid] != a[mid + 1])
            return a[mid];
        if (mid % 2 && a[mid] == a[mid - 1])
            left = mid + 1;
        else if (mid % 2 == 0 && a[mid] == a[mid + 1])
            left = mid + 1;
        else
            right = mid - 1;
    }
    return left;
}

main(){
    vector<int> a = {3,3,7,7,10,11,11};
    cout << singleNonDuplicate(a);
    return 0;
}