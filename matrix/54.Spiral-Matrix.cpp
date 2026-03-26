class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> result;
        int left = 0;
        int right = matrix[0].size()-1;
        int top = 0;
        int bottom = matrix.size()-1;
        while(left<=right && top<=bottom){
            for(int i=left;i<=right;i++){
                result.push_back(matrix[top][i]);
            }
            top++;
            for(int i=top;i<=bottom;i++){
                result.push_back(matrix[i][right]);
            }
            right--;
            if(top<=bottom){
                for(int i=right;i>=left;i--){
                    result.push_back(matrix[bottom][i]);
                }
                bottom--;
            } 
            
            if(left<=right){
                for(int i=bottom;i>=top;i--){
                    result.push_back(matrix[i][left]);
                }
                left++;
            }
        }
        return result;
    }
};

// tc: O(m*n) where m is the number of rows and n is the number of columns in the matrix
// sc: O(1) if we don't consider the output array, otherwise O(m*n) for the output array.
// Approach: We can use four pointers to keep track of the boundaries of the matrix. We can iterate through the matrix in a spiral manner and add the elements to the result array. We need to update the pointers after each iteration to move towards the center of the matrix. We also need to check if the pointers are still within the bounds of the matrix before adding elements to the result array.   