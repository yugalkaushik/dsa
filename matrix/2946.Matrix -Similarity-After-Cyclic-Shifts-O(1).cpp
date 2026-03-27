class Solution {
public:
    bool areSimilar(vector<vector<int>>& mat, int k) {
        int n = mat[0].size();
        int m = mat.size();
        if(k%n == 0) return true;
        k = k%n;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                int updatedindex;
                if(i%2){
                    updatedindex = (j + k)%n;
                } else{
                    updatedindex = (j-k+n)%n;
                }
                if(mat[i][j] != mat[i][updatedindex]) return false;
            }
        }
        return true;
    }
};

// tc: O(m*n) sc: O(1) since we are not using any extra space
// Approach: we can iterate through each element of the matrix and check if it is equal to the element at the updated index after cyclic shift. if the row index is even, we can calculate the updated index by adding k to the current index and taking modulo n. if the row index is odd, we can calculate the updated index by subtracting k from the current index and taking modulo n. if we find any element that is not equal to the element at the updated index, we can return false. if we iterate through the entire matrix and find that all elements are equal to the element at the updated index, we can return true.