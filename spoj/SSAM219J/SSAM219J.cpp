#include<iostream>

using namespace std;

int main()
{
    int n,k, a[1005], last, tong=0;
    int check = 0;
    cin >> n >> k;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
    }
    int start = 1;
    for(int i=1; i<=n; i++)
    {
        tong += a[i];
        while(tong > k)
            tong -= a[start++];
        cout<< tong << endl;
        if(tong == k) check = 1;
    }
    cout<< check;
}