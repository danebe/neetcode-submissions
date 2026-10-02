class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_set<char> row[9];
        unordered_set<char> col[9];
        unordered_set<char> box[9];

        for (int r=0;r<board.size();r++){
            for (int c=0;c<board[0].size();c++){
                char val = board[r][c];
                if (val=='.') continue;
                int boxidx = (r/3)*3+(c/3);
                if (row[r].contains(val) || col[c].contains(val) || box[boxidx].contains(val)) return false;
                row[r].insert(val);
                col[c].insert(val);
                box[boxidx].insert(val);
            }
        }
    return true;
    }
};
