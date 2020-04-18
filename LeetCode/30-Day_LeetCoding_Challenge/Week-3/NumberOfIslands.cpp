class Solution {
public:
    bool isSafe(int n, int m, int i, int j){
        if(i<0 || i>=n){
            return false;
        }
        if(j<0 || j>=m){
            return false;
        }
            return true;
    }

    int numIslands(vector<vector<char>>& grid) {
        if(grid.empty() || grid[0].empty()){
            return 0;
        }
        int H = grid.size();
        int W = grid[0].size();
        int answer = 0;

        vector<pair<int, int>> directions{{1, 0}, {0, 1}, {-1, 0}, {0, -1}};
        
        for(int row = 0; row < H; row++){
            for(int col = 0; col < W; col++){
                if(grid[row][col] == '1'){
                    answer++;
                    grid[row][col] = 0;
                    queue<pair<int, int>> q;
                    q.push({row, col});
                    while(!q.empty()){
                        pair<int, int> p = q.front();
                        q.pop();
                        for(pair<int, int> dir : directions){
                            int new_row = p.first + dir.first;
                            int new_col = p.second + dir.second;
                            if(isSafe(H, W, new_row, new_col) && grid[new_row][new_col] == '1'){
                                q.push({new_row, new_col});
                                grid[new_row][new_col] = 0;
                            }
                        }                        
                    }
                }
            }
        }
        return answer;
    }
};