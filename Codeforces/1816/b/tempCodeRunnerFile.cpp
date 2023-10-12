#include<bits/stdc++.h>

using namespace std;

main(){
    int test;
    cin>> test;
    for(int t = 1; t <= test; t++){
        int n;
        cin>>n;
        n*=2;
        cout<<n;
        int low = 1;
        int high = n-3;
        for(int i = 1; i<n/2; i++){
            if(i%2){
                cout<<" "<<low;
                low+=2;
            }
            else {
                cout<<" "<<high;
                high+=2;
            }
        }
        cout<<'\n';
        low = 2;
        high = n-2;
        for(int i = 1; i<n/2; i++){
            if(i%2){
                cout<<low<< " ";
                low+=2;
            }
            else {
                cout<<high<< " ";
                high+=2;
            }
        }
        cout<<n-1;
        cout<<'\n';
    }
}