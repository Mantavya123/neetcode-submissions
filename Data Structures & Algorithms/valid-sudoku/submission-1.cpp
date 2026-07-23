class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for (int i = 0; i < board.size(); i++){
            vector<bool> count(10, false);
            for (int j = 0; j < board[i].size(); j++){
                if (board[i][j] == '.') continue;
                if (count[board[i][j] - '1'] == true) return false;
                count[board[i][j] - '1'] = true;
            }
        }

        for (int i = 0; i < board.size(); i++){
            vector<bool> count(10, false);
            for (int j = 0; j < board[i].size(); j++){
                if (board[j][i] == '.') continue;
                if (count[board[j][i] - '1'] == true) return false;
                count[board[j][i] - '1'] = true;
            }
        }

        for (int i = 0; i < 3; i++){
            for (int j = 0; j < 3; j++){
                vector<bool> count(9, false);
                for (int r = 0; r < 3; r++){
                    for (int c = 0; c < 3; c++){
                        char val = board[i * 3 + r][j * 3 + c];
                        if (val == '.') continue;
                        if (count[val - '1']) return false;
                        count[val - '1'] = true;
                    }
                }
            }
        }

         
        return true;
    }
};
