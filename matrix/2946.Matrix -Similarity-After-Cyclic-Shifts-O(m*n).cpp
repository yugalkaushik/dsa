class Solution {
public:
    bool areSimilar(vector<vector<int>>& mat, int k) {
        vector<vector<int>> temp;
        temp = mat;
        int n = mat[0].size();
        if(k%n == 0) return true;
        int newk = k%n;
        for(int i=0;i<mat.size();i++){
            if(i%2 == 0) rotate(temp[i].begin(),temp[i].begin()+newk,temp[i].end());
            else rotate(temp[i].begin(),temp[i].begin()+(n - newk),temp[i].end());
        }
        if(temp == mat) return true;
        else return false;
    }
};

// tc: O(m*n) sc: O(m*n) since we are creating a new matrix temp of the same size as mat
// Approach: we can create a new matrix temp and rotate each row of temp by k%n. if the row index is even, we rotate it to the left by k%n, otherwise we rotate it to the right by k%n. after rotating all the rows, we can compare temp with mat. if they are equal, we can return true, otherwise we can return false.