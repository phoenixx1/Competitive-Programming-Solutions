class Solution {
public:
    bool colVerify(vector<vector<char>>& board, int col){
        set<char> s;
        for(int i = 0; i < 9; i++){
            if(s.find(board[i][col]) != s.end()){
                return false;
            }
            if(board[i][col] != '.'){
                s.insert(board[i][col]);
            }
        }
        return true;
    }
    bool rowVerify(vector<vector<char>>& board, int row){
        set<char> s;
        for(int i = 0; i < 9; i++){
            if(s.find(board[row][i]) != s.end()){
                return false;
            }
            if(board[row][i] != '.'){
                s.insert(board[row][i]);
            }
        }
        return true;
    }
    bool sqVerify(vector<vector<char>>& board, int row, int col){
        set<char> s;
        for(int i = 0; i < 3; i++){
            for(int j = 0; j < 3; j++){
                char temp = board[i + row][j + col];
                if(s.find(temp) != s.end()){
                    return false;
                }
                if(temp != '.'){
                    s.insert(temp);
                }
            }
        }
        return true;
    }
    bool valid(vector<vector<char>>& board, int row, int col){
        return rowVerify(board, row) && colVerify(board, col) && sqVerify(board, row - row % 3, col - col % 3);
    }
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i = 0; i < 9; i++){
            for(int j = 0; j < 9; j++){
                if(!valid(board, i, j)){
                    return false;
                }
            }
        }
        return true;
    }
};