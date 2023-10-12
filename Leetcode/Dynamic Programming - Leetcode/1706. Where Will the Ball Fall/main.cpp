#include<bits/stdc++.h>
using namespace std;

vector<int> findBall(vector<vector<int>>& grid) {
        vector<int> ans;
        int row = grid.size();
        int column = grid[0].size();
        for(int i=0; i<column; i++){
            ans.push_back(i);
        }
        for(int r = 0; r < row; ++r){
            for(int i = 0; i < column; i++){
                if(ans[i] == -1)
                    continue;
                if(grid[r][ans[i]] == -1){
                    if(ans[i] == 0){
                        ans[i] = -1;
                        continue;
                    }
                    if(grid[r][ans[i]-1] == 1){
                        ans[i] = -1;
                        continue;
                    }
                    ans[i] -=1;
                }
                if(grid[r][ans[i]] == 1){
                    if(ans[i] == column - 1){
                        ans[i] = -1;
                        continue;
                    }
                    if(grid[r][ans[i]+1] == -1){
                        ans[i] = -1;
                        continue;
                    }
                    ans[i] +=1;
                }
            }
        }
        return ans;
    }

int main(){
    vector<vector<int>> grid = {{1,1,1,1,1,1},{-1,-1,-1,-1,-1,-1},{1,1,1,1,1,1},{-1,-1,-1,-1,-1,-1}};
    findBall(grid);
    return 0;
}