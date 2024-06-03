#include<bits/stdc++.h>
#define fi first
#define se second
#define oo (1e9+7)
#define pb push_back
#define mp make_pair
#define el cout<<'\n'
#define ll long long

using namespace std;

bool isValidSudoku(vector<vector<char>> &board){
    int check[10];
    for(int i = 0; i<9; ++i){
        //check row
        for(int j = 0; j<9; ++j){
            check[j] = 0;
        }
        for(int j = 0; j<9; ++j){
            if(board[i][j] != '.') continue;
            if(check[board[i][j] - '0'])
                return false;
            check[board[i][j] - '0'] = 1;
        }
        //check column
        for(int j = 0; j<9; ++j){
            check[j] = 0;
        }
        for(int j = 0; j<9; ++j){
            if(board[j][i] != '.') continue;
            if(check[board[j][i] - '0'])
                return false;
                check[board[j][i] - '0'] = 1;
        }
        //check 3x3
        for(int j = 0; j<9; ++j){
            check[j] = 0;
        }
        for(int j = 0; j<9; ++j){
            int x = i/3*3 + j/3;
            int y = i%3*3 + j%3;
            if(board[x][y] != '.') continue;
            if(check[board[x][y] - '0'])
                return false;
                check[board[x][y] - '0'] = 1;
        }
    }
    return true;
}

main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    return 0;
}
