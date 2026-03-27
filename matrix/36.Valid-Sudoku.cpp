class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<unordered_set<char>> boxes(9),rows(9),column(9);       
        for(int r=0;r<9;r++){
            for(int c=0;c<9;c++){
                int val = board[r][c];
                if(val=='.') continue;
                int box = (r/3)*3 + c/3;
                if(rows[r].count(val)||column[c].count(val)||boxes[box].count(val)){
                    return false;
                }
                rows[r].insert(val);
                column[c].insert(val);
                boxes[box].insert(val);
            }
        }
        return true;
    }
};

// tc: O(1) sc: O(1) since the board is fixed size 9*9
// Approach: we can use 3 hashset to store the value of each row, column and box. if we find a duplicate value in any of them, we can return false. otherwise, we can return true at the end.