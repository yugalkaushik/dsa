class Solution {
public:
    vector<int> countBits(int n) {
        int i=0;
        vector<int> result;
        while(i<=n){
            int count=0;
            int curr = i;
            while(curr!=0){
                curr = curr & curr-1;
                count++;
            }
        result.push_back(count);
        i++;
        }
        return result;
    }
};

// tc = O(n*k) where k is the number of 1's in the binary representation of n
// sc = O(n) for the result vector