class Solution {
public:
    string convert(string s, int numRows) {
        string result = "";
        int n = s.size();
        if(numRows == 1 || numRows >=n) return s;

        vector<string> rows(numRows);
        int currRow = 0;
        bool goingDown = false;

        for(char c:s){
            rows[currRow] += c;
            if(currRow == 0 || currRow == numRows - 1){
                goingDown = !goingDown;
            }
            if(goingDown){
                currRow = currRow+1;
            } else currRow = currRow-1;
        }

        for(auto i:rows){
            result += i;
        }
        return result;
    }
};

// tc = O(N)
// sc = O(N)