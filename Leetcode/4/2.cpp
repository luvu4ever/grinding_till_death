#include<bits/stdc++.h>

using namespace std;

int visited[5001][5001];
string BFS(int x1, int y1, int x2, int y2){
    queue<pair<int, int>> q;
    q.push({x1, y1});
    while(!q.empty()){
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        int new = x+y;
        if(new <= x2 && !visited[new][y]){
            visited[new][y] = 1;
            q.push({new, y});
        }
        if(new <= y2 && !visited[x][new]){
            visited[x][new] = 1;
            q.push({x, new});
        }
        if(new == x2 && y == y2){
            return "YES";
        }
        if(new == y2 && x == x2){
            return "YES";
        }
    }
    return "NO";

}

string canReach(int x1, int y1, int x2, int y2){
    return BFS(x1, y1, x2, y2);
}

main(){
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    cout << canReach(x1, y1, x2, y2);
}