#include<bits/stdc++.h>

using namespace std;

main(){
    int test;
    cin>>test;
    for(int t = 1; t <= test; t++){
        int n, x1, x2, y1, y2, layer1, layer2;
        cin>>n >> x1>>y1>>x2>>y2;
        if(x1 <= n/2){
            if(y1 <= n/2)
                layer1 = max(n/2 - x1, n/2 - y1);
            else
                layer1 = max(n/2 - x1, y1 - (n/2+1));
        }else{
            if(y1 <= n/2)
                layer1 = max(x1 - (n/2+1), n/2 - y1);
            else
                layer1 = max(x1 - (n/2+1), y1 - (n/2+1));
        }
        if(x2 <= n/2){
            if(y2 <= n/2)
                layer2 = max(n/2 - x2, n/2 - y2);
            else
                layer2 = max(n/2 - x2, y2 - (n/2+1));
        }else{
            if(y2 <= n/2)
                layer2 = max(x2 - (n/2+1), n/2 - y2);
            else
                layer2 = max(x2 - (n/2+1), y2 - (n/2+1));
        }
        if(layer1 > layer2)
            cout<<layer1 - layer2;
        else
            cout<<layer2 - layer1;
        //cout<<layer1<<" "<<layer2<<'\n';
        cout<<'\n';
    }
    return 0;
}