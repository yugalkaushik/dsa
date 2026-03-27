class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int c = matrix[0].size()-1;
        int r = matrix.size()-1;
        vector<int> rows(r+1,1);
        vector<int> column(c+1,1);
        for(int i=0;i<=r;i++){
            for(int j=0;j<=c;j++){
                if(matrix[i][j] == 0){
                    rows[i] = 0;
                    column[j] = 0;
                }
            }
        }
        for(int i=0;i<=r;i++){
            if(rows[i]==0){
                for(int j=0;j<=c;j++) matrix[i][j] = 0;
            }
        }
        for(int i=0;i<=c;i++){
            if(column[i]==0){
                for(int j=0;j<=r;j++) matrix[j][i] = 0;
            }
        }
    }
};